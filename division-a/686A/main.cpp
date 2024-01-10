#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	long long d, x;

	cin >> n >> x;

	char c;
	int k = 0;

	while (n--) {
		cin >> c >> d;

		if (c == '+') {
			x += d;
		} else {
			if (x - d >= 0) {
				x -= d;
			} else {
				k++;
			}
		}
	}

	cout << x << " " << k;
}