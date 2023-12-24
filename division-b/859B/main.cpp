#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, k;
    string s;

    cin >> n;

    for (int i = 0; i < n; i++) {
        k = i % 6;

        if (k == 0 || k == 1) {
            s += 'a';
        } else if (k == 2 || k == 3) {
            s += 'b';
        } else {
            s += 'c';
        }
    }

    cout << s;
}
