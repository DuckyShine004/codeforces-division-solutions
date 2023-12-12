#include <iostream>
#include <set>

using namespace std;

void solve() {
    string s, t;
    cin >> s >> t;

    bool flag = false;
    set<char> cset;

    for (char sc : s) {
        cset.insert(sc);
    }

    for (char tc : t) {
        if (cset.find(tc) != cset.end()) {
            flag = true;
            break;
        }
    }

    cout << (flag ? "YES" : "NO") << "\n";
}

int main() {
    int q;
    cin >> q;

    while (q--) {
        solve();
    }
}