#include <algorithm>
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

#ifndef ONLINE_JUDGE
#include "Debug.h"
#else
debug(...)
#endif

using namespace std;

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

template <typename Ostream, typename Cont> typename enable_if<is_same<Ostream, ostream>::value, Ostream &>::type operator<<(Ostream &os, const Cont &v) {
    os << "[";
    for (auto &x : v) {
        os << x << ", ";
    }

    return os << "]";
}

template <typename Ostream, typename... Ts> Ostream &operator<<(Ostream &os, const pair<Ts...> &p) {
    return os << "{" << p.f << ", " << p.s << "}";
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

struct Edge {
    int p, q, d;
    bool operator<(const Edge &other) const {
        return d > other.d;
    }
};

void solve() {
    int n, m;
    readin(n, m);
    map<int, vector<int>> adj, T2;
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        readin(u, v);
        adj[u - 1].psb(v - 1);
        adj[v - 1].psb(u - 1);
    }
    vector<int> TR(m);
    for (int &u : TR) {
        cin >> u;
        --u;
    }

    vector<vector<int>> D(n, vector<int>(n, -1));
    // Find the metric closure, i.e., shortest path to all nodes and the graph G2 that contains all terminal nodes
    for (int i = 0; i < n; i++) {
        stack<int> st;
        st.push(i);
        D[i][i] = 0;
        while (!st.empty()) {
            int k = st.size();
            for (int j = 0; j < k; j++) {
                int u = st.top();
                st.pop();
                for (int v : adj[u]) {
                    if (D[i][v] == -1) {
                        D[i][v] = D[i][u] + 1;
                        st.push(v);
                    }
                }
            }
        }
    }
    debug(adj, adj);
    // Find the mst
    vector<pair<int, int>> E;
    priority_queue<Edge> pq;
    pq.push(Edge{TR[0], TR[0], 0});
    vector<bool> vis(m, false);
    while (!pq.empty()) {
        auto [p, q, d] = pq.top();
        pq.pop();
        if (vis[q])
            continue;
        vis[q] = true;
        if (p != q)
            E.psb({p, q});
        for (int v : TR) {
            if (q != v) {
                pq.push(Edge{q, v, D[q][v]});
            }
        }
    }

    // Construct the steiner graph
    set<pair<int, int>> G;
    /* set<int> ST; */
    for (auto [u, v] : E) {
        queue<int> q;
        q.push(u);
        map<int, int> path;
        path[u] = -1;
        vector<bool> viss(n, false);
        viss[u] = true;
        bool fl = false;
        while (!(q.empty() || fl)) {
            int k = q.size();
            for (int i = 0; i < k; i++) {
                int x = q.front();
                q.pop();
                if (x == v) {
                    fl = true;
                    break;
                }
                for (int y : adj[x]) {
                    if (!viss[y]) {
                        path[y] = x;
                        viss[y] = true;
                        q.push(y);
                    }
                }
            }
        }
        // Add paths to steiner graph
        vector<int> SP = {v};
        set<int> ST;
        while (path[v] != -1) {
            v = path[v];
            SP.psb(v);
        }
        int pl = SP.size();
        if (pl < 2) {
            for (int x : SP) {
                ST.insert(x);
            }
        } else {
            if (ST.empty()) {
                for (int i = 0; i < pl; i++) {
                    ST.insert(SP[i]);
                    if (i + 1 < pl) {
                        G.insert({SP[i], SP[i + 1]});
                    }
                }
            } else {
                int pi = -1, pj = -1;
                for (int i = 0; i < pl; i++) {
                    if (ST.find(SP[i]) != ST.end()) {
                        pi = i;
                        break;
                    }
                }
                for (int i = pl - 1; i >= 0; i--) {
                    if (ST.find(SP[i]) != ST.end()) {
                        pj = i;
                        break;
                    }
                }
                if (pi != -1) {
                    for (int i = 0; i < pi; i++) {
                        ST.insert(SP[i]);
                        if (i + 1 < pl) {
                            G.insert({SP[i], SP[i + 1]});
                        }
                    }
                }
                if (pj != -1) {
                    for (int i = pj; i < pl; i++) {
                        ST.insert(SP[i]);
                        if (i + 1 < pl) {
                            G.insert({SP[i], SP[i + 1]});
                        }
                    }
                }
                cout << "pi: " << pi << ", pj: " << pj << "\n";
            }
        }
        /* println("Iteration:"); */
        /* for (auto [u, v] : G) { */
        /*     cout << u << " " << v << "\n"; */
        /* } */
    }
}

int main() {
    fastio();

    int t = 1;
    /* int t; */
    /* cin >> t; */

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
