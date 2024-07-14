#include <algorithm>
#include <chrono>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>

using namespace std;
using namespace std::chrono;

#define f first
#define s second
#define ppb pop_back
#define psb push_back
#define fors(i, a, b) for (auto i = a; i < b; i++)
#define revs(i, a, b) for (auto i = a; i > b; i--)
#define len(a) (a).length()
#define sz(a) (a).size()
#define vec1(type, n) vector<type>(n)
#define vec2(type, n, m) vector<vector<type>>((n), vector<type>((m)))
#define lsh(a) (1 << (a));
#define str(a) to_string(a)
#define ft front()
#define bk back()
#define all(a) (a).begin(), (a).end()
#define print(n) cout << n << " ";
#define println(n) cout << n << "\n";
#define fastio() (ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr), cerr.tie(nullptr), cout << fixed, cout << setprecision(10));
#define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)

// clang-format off
#define time__(d) \
    for ( \
        auto blockTime = make_pair(chrono::high_resolution_clock::now(), true); \
        blockTime.second; \
        debug("%s: %ld ms\n", d, chrono::duration_cast<chrono::milliseconds>(chrono::high_resolution_clock::now() - blockTime.first).count()), blockTime.second = false \
    )
// clang-format on

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<vector<int>> vvi;
typedef vector<vector<bool>> vvb;
typedef vector<vector<ll>> vvll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<string> vs;
typedef vector<pii> vpii;
typedef vector<pll> vpll;

const string ln = "\n";
const double PI = 3.14159265358979323846;
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ll INFLL = LLONG_MAX;
const pii d4[4] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
const pii d8[8] = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, -1}};

template <typename T> void readarr(vector<T> &arr) {
    for (T &v : arr) {
        cin >> v;
    }
}

template <typename... T> void readin(T &...args) {
    ((cin >> args), ...);
}

template <typename T> void printarr(const T &arr) {
    for (auto it = arr.begin(); it != arr.end();) {
        cout << *it;
        if (++it != arr.end())
            cout << " ";
    }

    cout << "\n";
}

template <typename T> T gcd(T a, T b) {
    if (b == 0)
        return a;

    return gcd(b, a % b);
}

int recur_depth = 0;

// clang-format off
#ifdef DEBUG
#define dbg(x) {++recur_depth; auto x_=x; --recur_depth; cerr<<string(recur_depth, '\t')<<"\e[91m"<<__func__<<":"<<__LINE__<<"\t"<<#x<<" = "<<x_<<"\e[39m"<<endl;}
// clang-format on
#else
#define dbg(x)
#endif
template <typename Ostream, typename Cont> typename enable_if<is_same<Ostream, ostream>::value, Ostream &>::type operator<<(Ostream &os, const Cont &v) {
    os << "[";
    for (auto &x : v) {
        os << x << ", ";
    }

    return os << "]";
}

template <typename Ostream, typename... Ts> Ostream &operator<<(Ostream &os, const pair<Ts...> &p) {
    return os << "{" << p.first << ", " << p.second << "}";
}

template <typename T> void print_mat(const T &mat) {
    for (const auto &row : mat) {
        for (const auto &elem : row) {
            cout << elem << " ";
        }

        cout << "\n";
    }
}

template <typename T> void print_mat(const T mat, int n, int m) {
    fors(i, 0, n) {
        fors(j, 0, m) {
            cout << mat[i][j] << " ";
        }

        cout << "\n";
    }
}

template <typename T> int bs(const T &arr, int t, bool find = false) {
    int l = 0;
    int r = sz(arr) - 1;
    int k;

    while (l <= r) {
        k = l + (r - l) / 2;

        if (arr[k] == t) {
            return k;
        }

        if (arr[k] < t) {
            l = k + 1;
        } else {
            r = k - 1;
        }
    }

    return (find ? l : (arr[l] == t ? l : -1));
}

template <typename T> int bsl(const T &arr, int t, bool find = false) {
    int l = 0;
    int r = sz(arr) - 1;
    int k;

    while (l < r) {
        k = l + (r - l) / 2;

        if (arr[k] >= t) {
            r = k;
        } else {
            l = k + 1;
        }
    }

    return (find ? l : (arr[l] == t ? l : -1));
}

template <typename T> int bsr(const T &arr, int t, bool find = false) {
    int l = 0;
    int r = sz(arr) - 1;
    int k;

    while (l < r) {
        k = l + (r - l + 1) / 2;

        if (arr[k] <= t) {
            l = k;
        } else {
            r = k - 1;
        }
    }

    return (find ? l : (arr[l] == t ? l : -1));
}

class UnionFind {
  public:
    vi reps;
    vi rank;

    UnionFind(int n) : reps(n), rank(n, 0) {
        fors(i, 0, n) {
            reps[i] = i;
        }
    }

    int find(int x) {
        while (x != reps[x]) {
            reps[x] = reps[reps[x]];
            x = reps[x];
        }

        return x;
    }

    void merge(int x, int y) {
        x = find(x);
        y = find(y);

        if (x == y) {
            return;
        }

        if (rank[x] > rank[y]) {
            reps[y] = x;
        } else {
            reps[x] = y;

            if (rank[x] == rank[y]) {
                rank[y]++;
            }
        }
    }
};

class vec3 {
  public:
    double x, y, z;

    vec3() : x(0), y(0), z(0) {
    }
    vec3(double dx, double dy, double dz = 0) : x(dx), y(dy), z(dz) {
    }

    vec3 operator-() const {
        return vec3(-x, -y, -z);
    }

    double magnitude() const {
        return sqrt(x * x + y * y + z * z);
    }
};

inline vec3 operator-(const vec3 &a, const vec3 &b) {
    return vec3(a.x - b.x, a.y - b.y, a.z - b.z);
}

inline vec3 cross(const vec3 &a, const vec3 &b) {
    double dx = a.y * b.z - a.z * b.y;
    double dy = a.z * b.x - a.x * b.z;
    double dz = a.x * b.y - a.y * b.x;

    return vec3(dx, dy, dz);
}

inline double area(const vec3 &a, const vec3 &b, const vec3 &c) {
    return 0.5 * cross(b - a, c - a).magnitude();
}

const char chs[4] = {'N', 'S', 'E', 'W'};

bool valid(string &s) {
    int u, v;
    map<char, int> mp;

    for (char c : chs)
        mp[c] = 0;

    for (char c : s) {
        ++mp[c];
    }

    // Check if each device can execute at least one instruction
    if (mp['N'] == 1 && mp['S'] == 1 && mp['E'] == 0 && mp['W'] == 0)
        return false;
    if (mp['N'] == 0 && mp['S'] == 0 && mp['E'] == 1 && mp['W'] == 1)
        return false;

    u = min(mp['N'], mp['S']);
    v = min(mp['E'], mp['W']);

    for (int i = 0; i < 2; i++)
        mp[chs[i]] -= u;
    for (int i = 2; i < 4; i++)
        mp[chs[i]] -= v;

    for (char c : chs) {
        if (mp[c] & 1)
            return false;
    }

    return true;
}

const int maxn = 2e5 + 1;
int vis[maxn];

void solve() {
    int n, k, u, v;
    string s;
    map<char, int> mp, H, R;
    readin(n, s);
    vector<char> arr(n, ' ');
    memset(vis, 0, sizeof(vis));

    // Check if it is even possible to construct string
    if (!valid(s)) {
        println("NO");
        return;
    }

    for (char c : chs) {
        mp[c] = H[c] = R[c] = 0;
    }

    for (char c : s)
        ++mp[c];

    if (mp['N'] == 1 && mp['S'] == 1 && mp['E'] == 1 && mp['W'] == 1) {
        for (int i = 0; i < n; i++) {
            arr[i] = (s[i] == 'N' || s[i] == 'S') ? 'H' : 'R';
        }

        println(string(all(arr)));
        return;
    }

    u = min(mp['N'], mp['S']);
    v = min(mp['E'], mp['W']);

    // Construct string by first cancelling opposite directions
    for (int i = 0; i < n; i++) {
        if (mp['N'] != mp['S'] && (s[i] == 'N' || s[i] == 'S') && H[s[i]] < u) {
            ++H[s[i]];
            arr[i] = 'H';
            vis[i] = 1;
        }

        if (mp['E'] != mp['W'] && (s[i] == 'E' || s[i] == 'W') && H[s[i]] < v) {
            ++H[s[i]];
            arr[i] = 'H';
            vis[i] = 1;
        }
    }

    for (char c : chs) {
        R[c] = ceil((mp[c] - H[c]) / 2.0);
    }

    // Construct remaining string
    for (int i = 0; i < n; i++) {
        if (vis[i])
            continue;
        arr[i] = (R[s[i]] > 0) ? 'H' : 'R';
        --R[s[i]];
    }

    println(string(all(arr)));
}

int main() {
    fastio();

    /* int t = 1; */
    int t;
    cin >> t;

#ifdef DEBUG
    while (t--) {
        time__("Time") {
            solve();
        }
    }
#else
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout);
#endif
    while (t--) {
        solve();
    }
#endif
}
