#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string a, b, c;
	cin >> a >> b >> c;

	string s = a + b;

	sort(s.begin(), s.end());
	sort(c.begin(), c.end());

	cout << (s == c ? "YES" : "NO");
}