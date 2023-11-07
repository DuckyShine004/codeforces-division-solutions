#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void solve() {
	int n;
	cin >> n;

	vector<int> A(n);

	for (int &num : A) {
		cin >> num;
	}

	sort(A.begin(), A.end());

	int _min = 2 * A[0];
	int _max = 2 * A[n-1];

	int res = -1;

	for (int s = _min; s <= _max; s++) {
		int l = 0;
		int r = n-1;

		int count = 0;

		while (l < r) {
			int sum = A[l] + A[r];

			if (sum == s) {
				count++;

				l++;
				r--;
			} else if (sum < s) {
				l++;
			} else{
				r--;
			}
		}

		res = max(res, count);
	}

	cout << res << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;

	while (t--) {
		solve();
	}
}