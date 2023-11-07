#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isPrime(int n) {
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			return true;
		}
	}

	return false;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	int k, m = 1;

	while (true) {
		k = (n * m) + 1;

		if (isPrime(k)) {
			break;
		}

		m++;
	}

	cout << m;
}