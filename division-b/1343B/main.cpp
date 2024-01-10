#include <iostream>
#include <vector>

using namespace std;

void solve() {
	int n;
	cin >> n;

	int k = (n / 2) + n - 1;

	if (k % 2 == 0) {
		cout << "NO" << "\n";
		return;
	}

	cout << "YES\n";

	for (int i = 0; i < n - 1; i++) {
		cout << (i < n / 2 ? 2 * (i + 1) : (2 * (i - (n / 2))) + 1) << " ";
	}

	cout << k << "\n";
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