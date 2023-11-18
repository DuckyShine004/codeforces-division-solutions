#include <iostream>

using namespace std;

void solve() {
	int s, k, l;
	cin >> s;

	int res = s;

	while (s) {
		k = s % 10;
		l = (s - k) / 10;

		if (s == k + l) {
			break;
		}

		s = k + l;
		res += l;
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