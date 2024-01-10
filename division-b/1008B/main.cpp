#include <iostream>
#include <map>

using namespace std;

#define INF 1000000000

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, w, h;
    cin >> n;

    int cur = INF;
    bool flag = true;

    for (int i = 0; i < n; i++) {
        cin >> w >> h;

        if (w <= cur && h <= cur) {
            cur = max(w, h);
        } else if (w <= cur) {
            cur = w;
        } else if (h <= cur) {
            cur = h;
        } else {
            flag = false;
            break;
        }
    }

    cout << (flag ? "YES" : "NO");
}
