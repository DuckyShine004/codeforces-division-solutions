#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	int res = 0;

	while (n > 1) {
		res += n;

		for (int i = 2; i <= n; i++) {
			if (n % i == 0) {
				n /= i;
				break;
			}
		}
	}

	cout << res + 1;
}