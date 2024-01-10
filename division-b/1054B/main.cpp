#include <iostream>
#include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, x, i;
    cin >> n;

    set<int> iset;
    int res = -1;

    iset.insert(0);

    for (i = 0; i < n; i++) {
        cin >> x;

        if (iset.find(x) == iset.end()) {
            res = i + 1;
            break;
        }

        iset.insert(x);
        iset.insert(x + 1);
    }

    cout << res;
}
