#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>

using namespace std;

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

void solve() {}

int main() {
#ifdef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout);
#endif

    fastio();

    int t = 1;
    // cin >> t;

    while (t--) {
        solve();
    }
}
