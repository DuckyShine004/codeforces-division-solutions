#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
	int n;
	cin >> n;

	vector<int> A(n);

	for (int &a : A) {
		cin >> a;
	}

	sort(A.begin(), A.end());

	int k = 0;

	for (int i = 1; i < n; i++) {
		if (abs(A[i - 1] - A[i]) > 1) {
			break;
		}

		k++;
	}

	cout << ((k == n - 1 || n == 0) ? "YES" : "NO") << endl;
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