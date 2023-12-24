#include <iostream>
#include <map>

using namespace std;

const int INF = 1e9;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, res;
    string s;

    cin >> n >> s;
    map<char, int> imap;

    imap['L'] = 0;
    imap['R'] = 0;
    imap['D'] = 0;
    imap['U'] = 0;

    for (char c : s) {
        imap[c]++;
    }

    int _min = INF;

    for (auto p : imap) {
        _min = min(_min, p.second);
    }

    res = 4 * _min;

    res += 2 * min(imap['L'] - _min, imap['R'] - _min);
    res += 2 * min(imap['U'] - _min, imap['D'] - _min);

    cout << res;
}
