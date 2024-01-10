#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, in;
	cin >> n;

	int k, res;
	k = res = 0;

	for (int i = 0; i < n; i++) {
		cin >> in;

		if (in > 0) {
			k += in;
		} else {
			if (k > 0) {
				k--;
			} else {
				res++;
			}
		}
	}

	cout << res;
}