#include <algorithm>
#include <iostream>
#include <map>
#include <string.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b;
	cin >> a >> b;

	map<char, int> map;
	
	map['0'] = 6;
	map['1'] = 2;
	map['2'] = 5;
	map['3'] = 5;
	map['4'] = 4;
	map['5'] = 5;
	map['6'] = 6;
	map['7'] = 3;
	map['8'] = 7;
	map['9'] = 6;

	string num;
	int res = 0;

	for (int i = a; i <= b; i++) {
		num = to_string(i);

		for (char chr : num) {
			res += map[chr];
		}
	}

	cout << res;
}