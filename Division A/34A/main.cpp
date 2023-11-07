#include <vector>
#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	vector<int> a(n);

	for (int &num : a) {
		cin >> num;
	}

	int x, y;
	int _min = 1000;

	for (int i = 0; i < n; i++) {
		int l = (i == 0 ? n - 1 : i - 1);
		int r = (i + 1) % n;

		if (abs(a[l] - a[i]) < _min) {
			x = l;
			y = i;

			_min = abs(a[l] - a[i]);
		}

		if (abs(a[r] - a[i]) < _min) {
			x = r;
			y = i;

			_min = abs(a[r] - a[i]);
		}
	}

	cout << x + 1 << " " << y + 1;
}