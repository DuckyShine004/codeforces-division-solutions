#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, z;
	cin >> n >> m >> z;

	int cur = m;
	int res = 0;

	while (cur <= z) {
		if (cur % n == 0) {
			res++;
		}

		cur += m;
	}

	cout << res;
}