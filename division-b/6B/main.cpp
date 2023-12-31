#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

bool is_valid(int x, int y, int m, int n) {
    if (x < 0 || x >= m) {
        return false;
    }

    return y >= 0 && y < n;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    const pair<int, int> directions[4] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

    int n, m;
    char p;

    cin >> n >> m >> p;

    vector<string> A(n);
    set<char> cset;

    for (string &a : A) {
        cin >> a;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (A[i][j] != p || A[i][j] == '.') {
                continue;
            }

            for (pair<int, int> d : directions) {
                int x = j + d.first;
                int y = i + d.second;

                if (is_valid(x, y, m, n) && A[y][x] != p && A[y][x] != '.') {
                    cset.insert(A[y][x]);
                }
            }
        }
    }

    cout << cset.size();
}
