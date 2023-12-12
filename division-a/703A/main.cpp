#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, c;
	cin >> n;

	int dm, dc;
	dm = dc = 0;

	for (int i = 0; i < n; i++) {
		cin >> m >> c;

		if (m > c) {
			dm++;
		} else if (m < c) {
			dc++;
		} else {
			continue;
		}
	}

	if (dm > dc) {
		cout << "Mishka";
	} else if (dm < dc) {
		cout << "Chris";
	} else {
		cout << "Friendship is magic!^^";
	}
}