#include <iostream>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	string s;

	cin >> n >> s;

	int i, e, o, m;

	e = o = 0;
	m = n / 2;

	for (i = 0; i < n; i++) {
		if (s[i] != '4' && s[i] != '7') {
			break;
		}

		if (i < m) {
			e += (int) s[i];
		} else {
			o += (int) s[i];
		}
	}

	cout << ((e == o && i == n) ? "YES" : "NO");
}