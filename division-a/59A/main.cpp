#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s;
	cin >> s;

	int a, b;
	a = b = 0;

	for (char c : s) {
		if (isupper(c)) {
			a++;
		} else {
			b++;
		}
	}

	if (a > b) {
		transform(s.begin(), s.end(), s.begin(), ::toupper); 
	} else {
		transform(s.begin(), s.end(), s.begin(), ::tolower);
	}

	cout << s;
}