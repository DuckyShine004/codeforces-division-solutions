#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	vector<vector<int>> vvi(n, vector<int>(n, 1));

	for (int i = 1; i < n; i++) {
		for (int j = 1; j < n; j++) {
			vvi[i][j] = vvi[i - 1][j] + vvi[i][j - 1];
		}
	}

	cout << vvi[n - 1][n - 1];
}