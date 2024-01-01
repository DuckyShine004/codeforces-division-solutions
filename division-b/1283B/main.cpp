#include <cmath>
#include <iostream>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    int a = n - (n % k);

    cout << a + min(n % k, k / 2) << "\n";
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
