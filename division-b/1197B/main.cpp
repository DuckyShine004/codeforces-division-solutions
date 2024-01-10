#include <iostream>
#include <queue>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, num, idx;
    cin >> n;

    priority_queue<pair<int, int>> pq;
    
    for (int i = 0; i < n; i++) {
        cin >> num;
        pq.push({num, i});
    }

    bool flag = true;

    int pos = pq.top().second;
    int l, r;

    l = r = pos;
    pq.pop();

    while (!pq.empty() && flag) {
        idx = pq.top().second;

        if (idx == l - 1) {
            l--;
        } else if (idx == r + 1) {
            r++;
        } else {
            flag = false;
        }

        pq.pop();
    }

    cout << (flag ? "YES" : "NO");
}