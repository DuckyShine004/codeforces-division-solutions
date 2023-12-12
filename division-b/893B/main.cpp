#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	int k = 1;
	int prev, cur;

	while (true) {
		cur = (pow(2, k)-1) * pow(2, k-1);

		if (cur > n) {
			cout << prev;
			break;
		}

		if (n % cur == 0) {
			prev = cur;	
		}

		k++;
	}
}