#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int v;
    cin >> v;

    int n = v;

    while (n > 2) {
        n -= (n - 1);
    }

    cout << n;
}