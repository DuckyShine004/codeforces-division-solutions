#include <iostream>

using namespace std;

int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}

	return gcd(b, a % b);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b, n, t;
	cin >> a >> b >> n;

	t = 0;

	while (n) {
		n -= (t == 0) ? gcd(a, n) : gcd(b, n);
		t ^= 1;
	}

	cout << (t ^ 1);
}