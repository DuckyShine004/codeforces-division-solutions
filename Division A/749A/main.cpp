#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	// Optimal solution is to find 2x + 3y = n;
	// y = {1, if n & 1
	//     {0, otherwise

	int y = n & 1;
	int x = (y) ? (n - 3) / 2 : n / 2;

	cout << x + y << endl;

	for (int i = 0; i < x; i++) {
		cout << 2 << " ";
	}

	if (y) {
		cout << 3;
	}
}