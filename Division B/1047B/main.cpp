#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	long long x, y, dx, dy;
	long long d, k;

	d = 0;

	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		k = x + y;

		if (d < k) {
			dx = x;
			dy = y;

			d = k;
		}
	}

	cout << dx + dy;
}