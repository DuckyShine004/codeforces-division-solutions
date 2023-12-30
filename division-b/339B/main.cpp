#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll n, m;
    cin >> n >> m;

    vector<ll> A(m);

    for (ll &a : A) {
        cin >> a;
    }

    ll pre = 1;
    ll res = 0;

    for (ll cur : A) {
        if (pre == cur) {
            continue;
        } else {
            res += (cur > pre) ? cur - pre : n - pre + cur;
            pre = cur;
        }
    }

    cout << res;
}
