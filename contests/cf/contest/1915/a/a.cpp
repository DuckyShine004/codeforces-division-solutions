#include <algorithm>
#include <chrono>
#include <cmath>
#include <functional>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>

using namespace std;
using namespace std::chrono;

#define f first
#define s second
#define ppb pop_back
#define psb push_back
#define forinc(i, a, b) for (int i = a; i <= b; i++)
#define fordec(i, a, b) for (int i = a; i >= b; i--)
#define FOR(i, a, b) for (int i = a; i < b; i++)
#define len(a) (a).length();
#define sz(a) (a).size();
#define lsh(a) (1 << (a));
#define ft front();
#define bk back();
#define all(a) (a).begin(), (a).end();
#define fastio() (ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr), cerr.tie(nullptr));
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
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const pii d4[4] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
const pii d8[8] = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, -1}};

template <typename T> void print_soln(const T &x) {
    for (auto it = x.begin(); it != x.end();) {
        cout << *it;
        if (++it != x.end())
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
template <typename Ostream, typename... Ts> Ostream &operator<<(Ostream &os, const pair<Ts...> &p) { return os << "{" << p.first << ", " << p.second << "}"; }

void solve() {
    int n, a, b, c;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a >> b >> c;

        if (a == b) {
            cout << c << "\n";
        } else if (b == c) {
            cout << b << "\n";
        } else {
            cout << c << "\n";
        }
    }
}

int main() {
#ifdef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout);
#endif

    fastio();

    int t = 1;
    // cin >> t;

#ifdef DEBUG
    while (t--) {
        time__("Time") { solve(); }
    }
#else
    while (t--) {
        solve();
    }
#endif
}
