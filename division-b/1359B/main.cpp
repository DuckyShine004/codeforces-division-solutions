#include <iostream>
#include <string>
#include <vector>

using namespace std;

const int INF = 1e9;

void solve() {
    int n, m, x, y;
    cin >> n >> m >> x >> y;

    vector<string> arr(n);
    vector<vector<int>> dp(n, vector<int>(m + 1));

    int res = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= m; j++) {
            dp[i][j] = INF;

            if (arr[i][j - 1] == '.') {
                dp[i][j] = min(dp[i][j], dp[i][j - 1] + x);

                if (j > 1 && arr[i][j - 2] == '.') {
                    dp[i][j] = min(dp[i][j], dp[i][j - 2] + y);
                }
            } else {
                dp[i][j] = dp[i][j - 1];
            }
        }

        res += dp[i][m];
    }

    cout << res << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}
