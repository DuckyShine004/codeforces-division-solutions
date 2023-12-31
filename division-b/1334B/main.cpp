#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;

    vector<int> A(n);

    for (int &a : A) {
        cin >> a;
    }

    sort(A.begin(), A.end(), greater<int>());

    double k;

    double cur = 0;
    double res = 0;

    for (int i = 0; i < n; i++) {
        cur += A[i];
        res++;

        k = cur / res;

        if (k < x) {
            res--;
            break;
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
