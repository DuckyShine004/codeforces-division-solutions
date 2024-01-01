#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<string> arr(n);

    for (string &s : arr) {
        cin >> s;
    }

    int res = 0;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i][m - 1] == 'R') {
            res++;
        }
    }

    for (int j = 0; j < m - 1; j++) {
        if (arr[n - 1][j] == 'D') {
            res++;
        }
    }

    cout << res << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}
