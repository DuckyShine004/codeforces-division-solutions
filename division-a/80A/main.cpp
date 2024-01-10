#include <iostream>

using namespace std;

bool isPrime(int n) {
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			return false;
		}
	}

	return true;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;

	int k = n + 1;

	while (!isPrime(k)) {
		k++;
	}

	cout << (k == m ? "YES" : "NO");
}