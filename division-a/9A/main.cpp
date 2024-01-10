#include <iostream>
#include <algorithm>

using namespace std;

int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}

	return gcd(b, a % b);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int Y, W;
	cin >> Y >> W;

	int D = 6 - max({Y, W}) + 1;
	int V = gcd(D, 6);

	cout << D / V << '/' << (6 / V);
}