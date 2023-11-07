#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	string s;
	cin >> s;

	string a, b;
	a = b = "";

	bool flag = true;

	while (n--) {
		if (flag) {
			b = s[n] + b;
		} else {
			a += s[n];
		}

		flag = !flag;
	}


	cout << a + b;
}