#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s;
	getline(cin, s);

	set<char> c_set;

	for (char c : s) {
		int asc = (int) c;

		if (asc >= 97 && asc <= 122) {
			c_set.insert(c);
		}
	}

	cout << c_set.size();
}