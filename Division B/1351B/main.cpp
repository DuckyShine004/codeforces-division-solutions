#include <iostream>
#include <vector>
#include <string>

using namespace std;

void solve() {
	int a1, b1, a2, b2;
	cin >> a1 >> b1 >> a2 >> b2;

	int m1 = max(a1, b1);
	int m2 = max(a2, b2);

	if (m1 != m2) {
		cout << "No" << endl;
		return;
	}

	cout << (min(a1, b1) + min(a2, b2) == m1 ? "Yes" : "No") << endl;
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