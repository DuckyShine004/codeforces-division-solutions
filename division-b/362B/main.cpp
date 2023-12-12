#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;

	vector<int> A(m);

	for (int &num : A) {
		cin >> num;
	}

	// There are no dirty stairs
	if (m == 0) {
		cout << "YES";
		return 0;
	}

	sort(A.begin(), A.end());

	// Check if the first or last stairs are dirty
	if (A[0] == 1 || A[m-1] == n) {
		cout << "NO";
		return 0;
	}

	for (int i = 0; i < m-2; ++i) {
		int x, y, z;

		x = A[i  ];
		y = A[i+1];
		z = A[i+2];

		if (y == x + 1 && z == x + 2) {
			cout << "NO";
			return 0;
		}
	}

	cout << "YES";
}	