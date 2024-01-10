#include <iostream>
#include <set>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	string s;

	cin >> n >> s;

	set<char> c_set;

	for (char c : s) {
		c_set.insert(tolower(c, locale()));
	}
	
	cout << (c_set.size() == 26 ? "YES" : "NO");
}