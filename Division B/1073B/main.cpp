#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, a, b;
    cin >> n;

    map<int, int> imap;

    for (int i = 0; i < n; i++) {
        cin >> a;
        imap[a] = i;
    }

    int _max = -1;
    int idx;

    for (int j = 0; j < n; j++) {
        cin >> b;

        idx = imap[b];

        if (idx <= _max) {
            cout << '0' << " ";
        } else {
            cout << idx - _max << " ";
            _max = idx;
        }
    }
}
