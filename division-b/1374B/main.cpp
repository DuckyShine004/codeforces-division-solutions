#include <iostream>

using namespace std;

void solve() {
	int n;
	cin >> n;

	int res = 0;

	while (n > 1) {
		if (n % 6 == 0) {
			n /= 6;
		} else {
			n *= 2;
		}

		res++;
	}

	cout << (n == 1 ? res : -1) << endl;
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