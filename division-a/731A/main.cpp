#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int get_left(char src, char dst) {
	int ldx = 0;
	int k = (int) src;

	while (src != dst) {
		k = (k - 1 >= 97) ? k - 1 : 122;
		src = (char) k;

		ldx++;
	}

	return ldx;
}

int get_right(char src, char dst) {
	int rdx = 0;
	int k = (int) src;

	while (src != dst) {
		k = (k + 1 <= 122) ? k + 1 : 97;
		src = (char) k;

		rdx++;
	} 

	return rdx;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s;
	cin >> s;

	s = 'a' + s;

	int l, r;
	int res = 0;

	for (int i = 0; i < s.size() - 1; i++) {
		l = get_left(s[i], s[i + 1]);
		r = get_right(s[i], s[i + 1]);
		
		res += (l < r) ? l : r;
	}

	cout << res;
}