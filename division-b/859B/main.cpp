#include <cmath>
#include <iostream>

using namespace std;

const int INF = 1e9;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, k, res;
    cin >> n;

    k = ceil(sqrt(n));
    res = INF;

    for (int i = 1; i <= k; i++) {
        for (int j = 1; j <= k; j++) {
            if (i * j >= n) {
                res = min(res, 2 * (i + j));
            }
        }
    }

    cout << res;
}
