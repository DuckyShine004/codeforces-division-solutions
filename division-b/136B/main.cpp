#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>

using namespace std;

typedef long long ll;

string get_ternary(int x) {
    string s = "";

    while (x) {
        s += (char)((x % 3) + 48);
        x /= 3;
    }

    reverse(s.begin(), s.end());

    return s;
}

ll get_decimal(string s) {
    int n = s.length();

    ll k, p;
    ll res = 0;

    for (int i = n - 1; i >= 0; i--) {
        k = (ll)s[i] - 48;
        p = pow(3, n - i - 1);

        res += k * p;
    }

    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a, b, c;
    cin >> a >> c;

    string s, t, u;

    s = get_ternary(a);
    u = get_ternary(c);

    int x = s.length();
    int y = u.length();

    int z = max(x, y);
    t = string(" ", z);

    if (x < y) {
        s = string(y - x, '0') + s;
    }

    if (x > y) {
        u = string(x - y, '0') + u;
    }

    int j, k, l;

    for (int i = 0; i < z; i++) {
        j = (int)s[i] - 48;
        k = (int)u[i] - 48;

        l = (j <= k) ? k - j : 3 + k - j;
        t[i] = (char)l + 48;
    }

    cout << get_decimal(t);
}
