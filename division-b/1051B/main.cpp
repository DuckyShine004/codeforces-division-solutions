#include <iostream>
#include <map>

using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll l, r;
    cin >> l >> r;

    if ((r - l + 1) & 1) {
        cout << "NO";
        return 0;
    }

    cout << "YES\n";

    for (ll i = l; i < r; i += 2) {
        cout << i << " " << i + 1 << "\n";
    }
}
