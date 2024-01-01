#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string r, s, t;
    cin >> t;

    int n = t.length();
    int j, k, p;
    j = k = p = 0;

    for (int i = 0; i < n; i++) {
        if (t[i] != 'a') {
            k++;
        }
    }

    if (k & 1) {
        cout << ":(";
        return 0;
    }

    if (k == 0) {
        cout << t;
        return 0;
    }

    s = "";

    for (int i = 0; i < n; i++) {
        if (p == k / 2) {
            if (t[i] == 'a') {
                s += t[i];
                continue;
            } else {
                break;
            }
        }

        if (t[i] != 'a') {
            r += t[i];
            p++;
        }

        s += t[i];
    }

    cout << (s + r == t ? s : ":(");
}
