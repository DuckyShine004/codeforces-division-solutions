#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	double n, m;
	cin >> n >> m;

	int res = 0;

	// Brute force solution
	for (double a = 0; a <= n; a++) {
		for (double b = 0; b <= m; b++) {

			// Check the system of equations
			if (pow(a, 2) + b == n && pow(b, 2) + a == m) {
				res++;
			} 
		}
	}

	cout << res;
}