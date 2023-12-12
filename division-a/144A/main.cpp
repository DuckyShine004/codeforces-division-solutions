#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, _min, _max;
	int num, min_idx, max_idx;

	cin >> n;

	_min = 100;
	_max = -1;

	min_idx = max_idx = 0;

	for (int i = 0; i < n; i++) {
		cin >> num;

		if (num <= _min) {
			_min = num;
			min_idx = i;
		}

		if (num > _max) {
			_max = num;
			max_idx = i;
		}
	}

	int d_max = max_idx;
	int d_min = (min_idx > max_idx) ? n - min_idx - 1 : n - min_idx - 2;

	cout << d_max + d_min;
}