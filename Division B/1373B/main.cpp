#include <iostream>
#include <string>

using namespace std;

int get_index(string s) {
	int res = -1;

	for (int i = 1; i < s.size(); i++) {
		if (s[i] != s[i - 1]) {
			res = i;
			break;
		}
	}

	return res;
}

void solve() {
	string s;

	cin >> s;

	bool flag = false;
	int idx, alice = 0;

	while (true) {
		flag = false;
		idx = get_index(s);

		if (idx != -1) {
			s = s.substr(0, idx - 1) + s.substr(idx + 1);
			flag = true;
		}

		if (!flag) {
			break;
		}

		alice ^= 1;
	}

	cout << (alice ? "DA" : "NET") << endl;
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