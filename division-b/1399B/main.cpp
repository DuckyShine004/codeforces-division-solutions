#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
	int n, k, l;
	cin >> n;

	vector<int> A(n), B(n);

	for (int &a : A) {
		cin >> a;
	}
	
	for (int &b : B) {
		cin >> b;
	}

	int min_a = *min_element(A.begin(), A.end());
	int min_b = *min_element(B.begin(), B.end());

	long long res = 0;

	for (int i = 0; i < n; i++) {
		k = A[i] - min_a;
		l = B[i] - min_b;

		if (k == l) {
			res += k;
		} else if (k > l) {
			res += k;
		} else {
			res += l;
		}
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
