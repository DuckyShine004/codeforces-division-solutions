#include <iostream>

using namespace std;

int cnt[4];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, v, m;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> v;
        cnt[v - 1]++;
    }

    int res = cnt[3];

    m = min(cnt[0], cnt[2]);

    cnt[0] -= m;
    cnt[2] -= m;

    res += m + cnt[2];

    res += cnt[1] / 2;
    cnt[1] %= 2;

    if (cnt[1]) {
        cnt[0] = max(0, cnt[0] - 2);
        cnt[1] = 0;

        res++;
    }

    res += (cnt[0] / 4);
    cnt[0] %= 4;

    res += cnt[0] > 0;

    cout << res;
}
