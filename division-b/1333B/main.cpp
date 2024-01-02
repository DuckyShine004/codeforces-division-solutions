#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n, a;
    cin >> n;

    vector<int> A(n), B(n), N(n), P(n);

    for (int &a : A) {
        cin >> a;
    }

    for (int &b : B) {
        cin >> b;
    }

    if (A[0] != B[0]) {
        cout << "NO\n";
        return;
    }

    for (int i = 1; i < n; i++) {
        if (A[i - 1] == 0) {
            P[i] = P[i - 1];
            N[i] = N[i - 1];
        } else if (A[i - 1] < 0) {
            N[i] = N[i - 1] + 1;
            P[i] = P[i - 1];
        } else {
            P[i] = P[i - 1] + 1;
            N[i] = N[i - 1];
        }
    }

    bool flag = true;

    for (int i = n - 1; i >= 1; i--) {
        if (A[i] == B[i]) {
            continue;
        }

        if (B[i] > A[i]) {
            if (P[i] == 0) {
                flag = false;
            }
        } else {
            if (N[i] == 0) {
                flag = false;
            }
        }

        if (!flag) {
            break;
        }
    }

    cout << (flag ? "YES" : "NO") << "\n";
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
