#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string x, z;
	cin >> x >> z;

	string y = "";

	int n = x.size();

	for (int i = 0; i < n; i++) {
		// check if z is greater than x
		if ((int) z[i] > (int) x[i]) {
			cout << -1;
			return 0;
		}

		y += z[i];
	}

	cout << y;
}