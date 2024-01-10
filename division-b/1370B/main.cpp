#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n, k, i;
    cin >> n;

    vector<int> A, E, O;

    bool flag = true;

    for (int i = 0; i < 2 * n; i++) {
        cin >> k;
        (k & 1) ? O.push_back(i + 1) : E.push_back(i + 1);
    }

    if (E.size() % 2 == 0 && O.size() % 2 == 0) {
        flag = false;
    } else {
        E.pop_back();
        O.pop_back();
    }

    for (int e : E) {
        A.push_back(e);
    }

    for (int o : O) {
        A.push_back(o);
    }

    i = (flag) ? 0 : 2;

    for (; i < A.size(); i += 2) {
        cout << A[i] << " " << A[i + 1] << "\n";
    }
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
