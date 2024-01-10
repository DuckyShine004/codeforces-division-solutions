#include <iostream>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, d, cur, max;
	cin >> n >> d;

	string s;

	cur = max = 0;

	for (int i = 0; i < d; i++) {
		cin >> s;

		if (s.find('0') < s.size()) {
			cur++;
		} else {
			cur = 0;
		}

		max = (max < cur) ? cur : max;
	}

	cout << max;
}