#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;

	int i = 0;

	while (true) {
		if (m - i - 1 < 0) {
			break;
		}

		m -= i + 1;
		i = (i + 1) % n;
	}

	cout << m;
}