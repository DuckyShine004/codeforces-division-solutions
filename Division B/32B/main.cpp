#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s, res;
	cin >> s;

	map<string, char> s_map;

	s_map["."] = '0';
	s_map["-."] = '1';
	s_map["--"] = '2';

	int ndx, idx = 0;

	while (idx < s.size()) {
		string cur = "";
		
		for (ndx = idx; ndx < ndx + 2; ndx++) {
			cur += s[ndx];

			if (s_map.find(cur) != s_map.end()) {
				break;
			}
		}

		res += s_map[cur];
		idx = ndx + 1;
	}

	cout << res;
}