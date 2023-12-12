#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, x, y;
    cin >> n;

    int neg, pos;
    neg = pos = 0;

    for (int i = 0; i < n; i++) {
        cin >> x >> y;

        if (x < 0) {
            neg++;
        } else {
            pos++;
        }
    }

    cout << (neg <= 1 || pos <= 1 ? "Yes" : "No");
}