#include <iostream>
#include <string>

using namespace std;

void solve() {
	int n, a, b;
	cin >> n >> a >> b;

	string res;
	int asc = 0;

	for (int i = 0; i < n; i++) {
		res += (char) (asc + 97);
		asc = (asc + 1) % b;
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