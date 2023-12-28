#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, a, l, r;
    cin >> n >> a;

    vector<int> T(n);

    for (int &t : T) {
        cin >> t;
    }

    int cur = a - 1;
    int res = T[cur];

    for (int i = 1; i < n; i++) {
        if (cur - i >= 0 && cur + i < n && (T[cur - i] & T[cur + i])) {
            res += 2;
        } else if (cur + i >= n && cur - i >= 0 && T[cur - i]) {
            res++;
        } else if (cur - i < 0 && cur + i < n && T[cur + i]) {
            res++;
        }
    }

    cout << res;
}
