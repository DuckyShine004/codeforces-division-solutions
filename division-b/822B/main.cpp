#include <iostream>
#include <string>
#include <vector>

using namespace std;

const int INF = 1001;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;
    cin >> n >> m;

    string s, t;
    cin >> s >> t;

    vector<int> a;
    int _min = INF;

    for (int i = 0; i < m - n + 1; i++) {
        vector<int> b;

        for (int j = 0; j < n; j++) {
            if (s[j] != t[i + j]) {
                b.push_back(j + 1);
            }
        }

        if (_min > b.size()) {
            _min = b.size();
            a = b;
        }
    }

    cout << _min << "\n";

    for (int num : a) {
        cout << num << " ";
    }
}
