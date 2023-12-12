#define _USE_MATH_DEFINES
#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	vector<double> r(n);

	for (double &ri : r) {
		cin >> ri;
	}

	sort(r.begin(), r.end());

	double res = 0;
	bool color = 1;

	for (int i = r.size() - 1; i >= 0; i--) {
		// Check if the color is red - color = 1
		res += (color ? pow(r[i], 2) : -pow(r[i], 2));
		color ^= 1;
	}

	cout << res * M_PI;
}