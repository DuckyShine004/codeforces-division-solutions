#include <iostream>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s, t;
	cin >> s >> t;

	int a = s.size() - 1;
	int b = t.size() - 1;

	while ((a >= 0 && b >= 0) && (s[a] == t[b])) {
		a--;
		b--;
	}

	cout << a + b + 2;
}