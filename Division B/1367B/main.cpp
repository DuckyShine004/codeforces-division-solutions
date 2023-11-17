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

	int k, l;
	k = l = 0;

	for (int i = 0; i < n; i++) {
		if (i & 1) {
			if (A[i] % 2 == 0) {
				k++;
			}
		} else {
			if (A[i] & 1) {
				l++;
			}
		}
	}

	cout << (k == l ? (k + l) / 2 : -1) << endl;
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