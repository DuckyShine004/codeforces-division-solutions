#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool comparator(const pair<int, int> &a, const pair<int, int> &b) {
    if (a.second == b.second) {
        return a.first > b.first;
    }

    return a.second > b.second;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, a, b, k;
    cin >> n;

    vector<pair<int, int>> vec(n);

    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        vec[i] = {a, b};
    }

    sort(vec.begin(), vec.end(), comparator);

    int cnt = 1;
    int res = 0;

    for (const auto p : vec) {
        if (!cnt) {
            break;
        }

        res += p.first;
        cnt += p.second - 1;
    }

    cout << res;
}
