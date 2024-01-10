#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, k;
	cin >> n >> k;

	int res = 0;
	int cur = 0;

	int threshold = 240 - k;

	for (int i = 1; i <= n; i++) {
		cur += i * 5;

		if (cur > threshold) {
			break;
		}

		res++;
	}

	cout << res;
}