#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, before, after;
	cin >> n;

	string name;

	while (n--) {
		cin >> name >> before >> after;

		if (before >= 2400 && after > before) {
			cout << "YES";
			return 0;
		}
	}

	cout << "NO";
}