#include <vector>
#include <numeric>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, num;
	cin >> n;

	vector<int> o, e;

	for (int i = 0; i < n; i++) {
		cin >> num;

		if (num & 1) {
			o.push_back(num);
		} else {
			e.push_back(num);
		}
	}

	int i = o.size();
	int j = e.size();

	sort(o.begin(), o.end());
	sort(e.begin(), e.end());

	if (i == j || i == j + 1 || j == i + 1) {
		cout << 0;
	} else if (i < j) {
		cout << accumulate(e.begin(), e.begin() + (j - i - 1), 0);
	} else {
		cout << accumulate(o.begin(), o.begin() + (i - j - 1), 0);
	}
}