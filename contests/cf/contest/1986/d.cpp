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

struct pnt2 {
    int x;
    int y;
};

struct pnt3 {
    int x;
    int y;
    int z;
};

const int N = 21;
int dp[2][N];

int64_t get_num(string &s, int64_t a, int64_t b) {
    return stoi(s.substr(a, b));
}

void solve() {
    int n;
    string s;

    readin(n, s);

    if (n <= 2) {
        cout << s << '\n';
        return;
    }

    int64_t cur, res = INT_MAX;
    int64_t ra, rm, la, lm, x;

    for (int i = 0; i < n - 2; i++) {
        cur = get_num(s, i, 2);
        rm = lm = 1;
        ra = la = 0;

        for (int j = i + 2; j < n; j++) {
            x = get_num(s, j, 1);
            rm *= x;
            ra += x;
        }

        for (int j = 0; j < i; j++) {
            x = get_num(s, j, 1);
            lm *= x;
            la += x;
        }

        dbg(lm);
        dbg(rm);

        res = min({res, cur * (lm + rm), la + cur * rm, lm * cur + ra});
    }

    cout << res << '\n';
}

/* void solve() { */
/*     int n; */
/*     string s; */
/*     readin(n, s); */
/*     memset(dp, 0, sizeof(dp)); */

/*     dp[0][0] = dp[1][0] = get_num(s, 0, 1); */
/*     dp[0][1] = dp[1][1] = get_num(s, 0, 2); */

/*     dbg(s); */
/*     dbg(get_num(s, 0, 1)); */

/*     int a, b; */

/*     /1* There are two cases, dp[0][i] denotes adding, dp[1][i] denotes multiplying *1/ */
/*     for (int i = 2; i < n; i++) { */
/*         a = get_num(s, i - 1, 2); */
/*         b = get_num(s, i, ); */
/*         dp[0][i] = max(dp[0][i - 2]) */
/*     } */

/*     println(max(dp[0][n - 1], dp[1][n - 1])); */
/* } */

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
