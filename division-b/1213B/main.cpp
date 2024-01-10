#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n, k;
    cin >> n;

    vector<int> stack;

    for (int i = 0; i < n; i++) {
        cin >> k;

        while (!stack.empty() && stack.back() > k) {
            stack.pop_back();
        }

        stack.push_back(k);
    }

    cout << n - stack.size() << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}
