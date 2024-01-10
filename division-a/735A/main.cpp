#include <iostream>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, k;
	cin >> n >> k;

	string s;
	cin >> s;

	int g = s.find('G');
	int t = s.find('T');

	bool mask = g < t;
	bool flag = true;

	int i;

	for (i = g; (mask ? i < n : i >= 0); i = (mask ? i + k : i - k)) {
		if (s[i] == '#') {
			flag = false;
			break;
		}

		if (i == t) {
			break;
		}
	}

	cout << (flag && s[i] == 'T' ? "YES" : "NO");
}