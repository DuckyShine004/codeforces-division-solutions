#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b, c;
	cin >> a >> b >> c;

	int da, db, dc;
	int ratio = 1;

	while (true) {
		da = a - (ratio * 1);
		db = b - (ratio * 2);
		dc = c - (ratio * 4);

		if (da < 0 || db < 0 || dc < 0) {
			break;
		} 

		ratio++;
	}

	cout << 7 * (ratio - 1);
}