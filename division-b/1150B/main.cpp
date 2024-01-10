#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	vector<string> b(n);

	// Get the board
	for (string &row : b) {
		cin >> row;
	}

	// Tile the board
	for (int i=1; i<n-1; i++) {
		for (int j=1; j<n-1; j++) {
			if (b[i][j] == '#') {
				continue;
			}

			if (b[i+1][j] == '#') {
				continue;
			}

			if (b[i-1][j] == '#') {
				continue;
			}

			if (b[i][j+1] == '#') {
				continue;
			}

			if (b[i][j-1] == '#') {
				continue;
			}

			b[i][j] = '#';
			b[i+1][j] = '#';
			b[i-1][j] = '#';
			b[i][j+1] = '#';
			b[i][j-1] = '#';
		}
	}

	// Check if the board is valid after tiling it
	for (int i=0; i<n; i++) {
		if (b[i].find('.') < n) {
			cout << "NO";
			return 0;
		}
	}

	cout << "YES";
}