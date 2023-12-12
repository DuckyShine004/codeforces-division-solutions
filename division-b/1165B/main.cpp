#include <iostream>
#include <queue>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, num, cur;
    cin >> n;

    priority_queue<int> pq;

    for (int i = 0; i < n; i++) {
        cin >> num;
        pq.push(-num);
    }

    int k = 0;

    while (!pq.empty()) {
        cur = -pq.top();
        pq.pop();

        if (cur > k) {
            k++;
        } else {
            continue;
        }
    }

    cout << k;
}