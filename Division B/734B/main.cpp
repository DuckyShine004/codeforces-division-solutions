#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int k2, k3, k5, k6;
	cin >> k2 >> k3 >> k5 >> k6;

	int a, b;

	// Produce the maximum amount of 256s
	int _min256 = min({k2, k5, k6});
	a = _min256 * 256;
	k2 -= _min256;

	// Produce the remaining amount of 32s
	int _min32 = min(k2, k3);
	b = _min32 * 32;

	cout << a + b;
}