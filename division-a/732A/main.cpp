#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int k, r;
	cin >> k >> r;

	int n = 1;

	while (true) {
		if ((n * k) % 10 == 0 || ((n * k) - r) % 10 == 0) {
			break;
		}
		
		n++;
	}

	cout << n;
}