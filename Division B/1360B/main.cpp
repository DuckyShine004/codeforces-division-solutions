#include <iostream>
#include <vector>
#include <algorithm>

#define INF 10000

using namespace std;

void solve() {
	int n;
	cin >> n;

	vector<int> A(n);

	for (int &a : A) {
		cin >> a;
	}

	sort(A.begin(), A.end());

	int res = INF;

	for (int i = 1; i < n; i++) {
		res = min(res, A[i] - A[i - 1]);
	}

	cout << res << "\n";
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