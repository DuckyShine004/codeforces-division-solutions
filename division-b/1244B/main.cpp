#include <iostream>
#include <string>

using namespace std;

void solve() {
    int n, k, d;
    string s;

    cin >> n >> s;

    int res = 0;

    for (int i = 0; i < n; i++) {
        k = d = -1;

        for (int j = n - 1; j >= 0; j--) {
            if (s[j] == '1' && abs(j - i) + 1 > d) {
                d = abs(j - i) + 1;
                k = j;
            }
        }

        res = max(res, d + max(k + 1, n - k));
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
