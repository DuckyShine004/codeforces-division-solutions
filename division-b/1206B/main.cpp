#include <functional>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

typedef long long ll;

const ll INF = 1e9 + 1;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    vector<ll> arr(n);

    for (ll &a : arr) {
        cin >> a;
    }

    ll res;
    map<pair<int, int>, ll> memo;

    function<ll(int, int)> dp = [&](int i, int j) -> ll {
        if (i == n) {
            return (j == 1) ? 0 : INF;
        }

        if (memo.find({i, j}) != memo.end()) {
            return memo[{i, j}];
        }

        res = min(dp(i + 1, j) + abs(1 - arr[i]),
                  dp(i + 1, j * -1) + abs(-1 - arr[i]));

        memo[{i, j}] = res;

        return res;
    };

    cout << dp(0, 1);
}
