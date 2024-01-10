#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    if (n & 1) {
        cout << -1;
        return 0;
    }

    for (int i = 0; i < n / 2; i++) {
        cout << 2 * (i + 1) << " ";
        cout << (2 * i) + 1 << " ";
    }
}