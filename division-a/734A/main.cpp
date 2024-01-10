#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	string s;

	cin >> n >> s;

	map<char, int> c_map;

	for (int i = 0; i < n; i++) {
		c_map[s[i]]++;
	}

	if (c_map['A'] == c_map['D']) {
		cout << "Friendship";
	} else if (c_map['A'] > c_map['D']) {
		cout << "Anton";
	} else {
		cout << "Danik";
	}
}