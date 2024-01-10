#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
	int n;
	cin >> n;

	vector<int> A(n);

	int res = 1;

	for (int &a : A) {
		cin >> a;
	}

	sort(A.begin(), A.end());

	int i;

	for (i = n - 1; i >= 0; i--) {
		if (A[i] <= i + 1) {
			break;
		}
	}

	cout << res + i + 1 << endl;
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