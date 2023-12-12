#include <iostream>
#include <string.h>
#include <cctype>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string a,b;
	cin >> a >> b;

	int n = a.length();
	int res = 0;

	for (int i = 0; i < n; i++) {
		int u, v;

		u = (int) tolower(a[i]);
		v = (int) tolower(b[i]);

		// Check if the first string is greater
		if (u > v) {
			res = 1;
			break;
		}
		
		// Check if the second string is greater
		if (u < v) {
			res = -1;
			break;
		}
	}

	cout << res;
}