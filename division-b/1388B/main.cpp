#include <iostream>
#include <string>

using namespace std;

void solve() {
	int n;
	cin >> n;

	int m = 3 * n;
	int k = m / 4;

	string s(k, '9');
	string t(n - k, '8');

	cout << s + t << endl;
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