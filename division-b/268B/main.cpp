#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    int res = n;

    for (int i = 1; i < n; i++) {
        res += i * (n - i);
    }

    cout << res;
}
