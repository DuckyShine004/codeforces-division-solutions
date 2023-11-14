#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int k, n, w;
	cin >> k >> n >> w;

	cout << max(0, (k * (w * (w + 1) / 2)) - n);
}