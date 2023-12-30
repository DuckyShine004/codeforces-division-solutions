#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;
    cin >> s;

    int n, m;
    n = m = 0;

    for (char c : s) {
        if (c == '4') {
            n++;
        }

        if (c == '7') {
            m++;
        }
    }

    if (n == 0 && m == 0) {
        cout << -1;
        return 0;
    }

    cout << (n >= m ? 4 : 7);
}
