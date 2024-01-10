#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<int> x_pos(m);
    vector<int> y_pos(n);

    vector<string> grid(n);

    for (int i = 0; i < n; i++) {
        cin >> grid[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == '*') {
                x_pos[j]++;
                y_pos[i]++;
            }
        }
    }

    int dx, dy;

    for (int i = 0; i < m; i++) {
        if (x_pos[i] == 1) {
            dx = i + 1;
            break;
        }
    }

    for (int j = 0; j < n; j++) {
        if (y_pos[j] == 1) {
            dy = j + 1;
            break;
        }
    }

    cout << dy << " " << dx;
}