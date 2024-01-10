#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

void solve() {
	string s;
	cin >> s;

	sort(s.begin(), s.end());

	int a = 0;
	int b = s.length() - 1;

	bool isPalindromic = true;

	// Check if the string is palindromic
	while (a < b) {
		if (s[a] != s[b]) {
			isPalindromic = false;
			break;
		}

		a++;
		b--;
	}

	if (isPalindromic) {
		cout << -1 << endl;
	} else {
		cout << s << endl;
	}
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