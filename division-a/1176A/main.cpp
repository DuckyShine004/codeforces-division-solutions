#include <iostream>
 
using namespace std;

void solve() {
    long long n;
    cin >> n;

    int res = 0;

    while (true) {
        if (n % 2 == 0) {
            n = n / 2;
        } else if (n % 3 == 0) {
            n = (2 * n) / 3;
        } else if (n % 5 == 0) {
            n = (4 * n) / 5;
        } else {
            break;
        }

        res++;
    }

    cout << (n == 1 ? res : -1) << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int q;
    cin >> q;

    while (q--) {
        solve();
    }
}