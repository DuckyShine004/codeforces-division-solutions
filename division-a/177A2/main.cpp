#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    int k = n / 2;

    vector<vector<int>> A;

    for (int i = 0; i < n; i++) {
        vector<int> V(n);

        for (int j = 0; j < n; j++) {
            cin >> V[j];
        }

        A.push_back(V);
    }

    int res = 0;

    // top left -> bottom right diagonal
    for (int i = 0; i < n; i++) {
        res += A[i][i];
    }

    // top right -> bottom left diagonal
    for (int j = n - 1; j >= 0; j--) {
        if (j == k) {
            continue;
        }

        res += A[n - j - 1][j];
    }

    // middle left -> middle right
    for (int x = 0; x < n; x++) {
        if (x == k) {
            continue;
        }

        res += A[k][x];
    }

    // middle top -> middle bottom
    for (int y = 0; y < n; y++) {
        if (y == k) {
            continue;
        }

        res += A[y][k];
    }

    cout << res;
}