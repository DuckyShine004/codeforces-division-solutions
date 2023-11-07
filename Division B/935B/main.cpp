#include <iostream>
#include <string.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	string s;
	cin >> s;

	int x, y, res;
	x = y = res = 0;

	for (int i = 0; i < n-1; i++) {
		if (s[i] == 'U') {
			y++;
		}

		if (s[i] == 'R') {
			x++;
		}

		// If the previous position was a gate
		if (x == y && s[i] == s[i+1]) {
			res++;
		}
	}


	cout << res;
}