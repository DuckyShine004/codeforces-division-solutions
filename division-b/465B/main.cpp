#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    vector<int> A(n);

    for (int &a : A) {
        cin >> a;
    }

    int pre, cur, res;
    res = pre = cur = 0;

    bool is_found = false;
    ;

    for (int i = 0; i < n; i++) {
        if (!is_found) {
            cur = i;
        }

        if (A[i]) {
            pre = cur;
            cur = i;

            if (!is_found) {
                res++;
                is_found = true;
                continue;
            }

            if (i - pre > 1) {
                res += 2;
            } else {
                res++;
            }
        }
    }

    cout << res;
}
