#include <iostream>

using namespace std;

typedef long long ll;

ll get_height(ll n) { return ((3 * n * (n + 1)) / 2) - n; }

void solve() {
    int n;
    cin >> n;

    ll l, r, h, k;
    bool flag;

    int res = 0;

    while (n > 1) {
        flag = false;

        l = 0;
        r = n / 2;

        while (l <= r) {
            k = l + (r - l) / 2;
            h = get_height(k);

            if (h == n) {
                flag = true;
                n -= h;

                break;
            }

            if (h < n) {
                l = k + 1;
            } else {
                r = k - 1;
            }
        }

        res++;

        if (flag) {
            continue;
        }

        n -= get_height(r);
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
