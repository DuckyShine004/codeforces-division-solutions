#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, k, x;
    cin >> n >> k;

    vector<int> A(n);

    for (int &a : A) {
        cin >> a;
    }

    int res = 0;

    for (int i = 1; i < n; i++) {
        x = A[i] + A[i - 1];

        if (x < k) {
            res += k - x;
            A[i] += k - x;
        }
    }

    cout << res << "\n";

    for (int a : A) {
        cout << a << " ";
    }
}
