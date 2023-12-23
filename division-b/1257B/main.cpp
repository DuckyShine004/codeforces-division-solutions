#include <iostream>

using namespace std;

void solve() {
    int x, y;
    cin >> x >> y;

    bool flag = true;

    int cur = x;
    int pre = x;

    while (cur < y) {
        if (cur & 1) {
            cur--;
        } else {
            cur *= 1.5;

            if (cur <= pre) {
                flag = false;
                break;
            }

            pre = cur;
        }
    }

    cout << (flag ? "YES" : "NO") << "\n";
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
