#include <iostream>

using namespace std;

void solve() {
	int x, n, m;
	cin >> x >> n >> m;

	bool flag = false;

	for (int i = 0; i < n; i++) {
		if (x <= 20 || x <= (m * 10)) {
			break;
		}
		
		x = (x / 2) + 10;
	}

	for (int j = 0; j < m; j++) {
		x -= 10;
	}

	cout << (x <= 0 ? "YES" : "NO") << "\n";
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