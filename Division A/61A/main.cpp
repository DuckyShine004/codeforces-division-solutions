#include <iostream>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s, t;
	cin >> s >> t;

	string r = "";

	for (int i = 0; i < s.size(); i++) {
		int a = (int) s[i] - 30;
		int b = (int) t[i] - 30;

		r += (a ^ b) ? "1" : "0";
	}

	cout << r;
}