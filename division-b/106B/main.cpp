#include <iostream>
#include <set>
#include <vector>

using namespace std;

struct laptop {
    int s;
    int r;
    int h;
    int c;
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, s, r, h, c;
    cin >> n;

    vector<laptop> vec(n);
    set<int> iset;
    laptop l, a, b;

    int m, p;
    m = 1001;
    p = 0;

    for (int i = 0; i < n; i++) {
        cin >> s >> r >> h >> c;

        l.s = s;
        l.r = r;
        l.h = h;
        l.c = c;

        vec[i] = l;
    }

    for (int i = 0; i < n; i++) {
        a = vec[i];

        for (int j = 0; j < n; j++) {
            if (i == j) {
                continue;
            }

            b = vec[j];

            if (a.s < b.s && a.r < b.r && a.h < b.h) {
                iset.insert(i);
                break;
            }
        }

        if (iset.find(i) == iset.end() && a.c < m) {
            m = a.c;
            p = i;
        }
    }

    cout << p + 1;
}
