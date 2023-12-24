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
        k = i % 4;

        if (k == 0 || k == 1) {
            s += 'a';
        } else {
            s += 'b';
        }
    }

    cout << s;
}
