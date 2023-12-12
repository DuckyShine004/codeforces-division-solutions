#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, w;
	cin >> n >> m;

	int cur, res;
	cur = res = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 2 * m; j++) {
			cin >> w;
			cur += w;

			if ((j + 1) % 2 == 0) {
				res += (cur > 0) ? 1 : 0;
				cur = 0;
			}
		}
	}

	cout << res;
}