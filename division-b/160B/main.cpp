#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, k;
    string s;

    cin >> n >> s;

    vector<int> a;
    vector<int> b;

    bool flag = true;

    for (int i = 0; i < n; i++) {
        a.push_back((int)s[i] - 48);
    }

    for (int i = n; i < 2 * n; i++) {
        b.push_back((int)s[i] - 48);
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    for (int i = 0; i < n; i++) {
        if (a[i] <= b[i]) {
            flag = false;
            break;
        }
    }

    if (flag) {
        cout << "YES";
        return 0;
    }

    flag = true;

    for (int i = 0; i < n; i++) {
        if (a[i] >= b[i]) {
            flag = false;
            break;
        }
    }

    cout << (flag ? "YES" : "NO");
}
