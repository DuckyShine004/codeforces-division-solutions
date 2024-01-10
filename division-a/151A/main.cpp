#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, k, l, c, d, p, nl, np;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;

	// Total amount of toasts with liquid
	int dx = k * l / (nl * n);

	// Total amount of toasts with lime slices
	int dy = c * d / n;

	// Total amount of toasts with salt
	int dz = p / (np * n);

	cout << min({dx, dy, dz});
}