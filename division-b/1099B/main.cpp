#include <cmath>
#include <iostream>

using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll n, k, v;
    int l, r, m;
    bool flag;

    cin >> n;

    k = ceil(sqrt(n));

    ll res = 1e10;

    for (ll i = 1; i <= k; i++) {
        flag = true;

        l = 0;
        r = n;

        while (l <= r) {
            m = l + (r - l) / 2;
            v = i * m;

            if (v == n) {
                res = min(res, i + m);
                flag = false;

                break;
            }

            if (v < n) {
                l = m + 1;
            } else {
                r = m - 1;
            }
        }

        if (flag) {
            res = min(res, i + r + 1);
        }
    }

    cout << res;
}
