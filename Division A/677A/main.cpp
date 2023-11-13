#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, h, a;
	cin >> n >> h;

	int res = 0;

	while (n--) {
		cin >> a;
		res += (a <= h) ? 1 : 2;
	}

	cout << res;
}