#include <iostream>
 
using namespace std;

void solve() {
    int n;
    cin >> n;

    cout << (n % 4 == 0 ? "YES" : "NO") << endl;
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