#include <string>
#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int tn;
	cin >> tn;

	double q = 1;
	int n = 1;

	while (q <= tn) {
		if (q == tn) {
			break;
		}

		q = (n * (n + 1)) / 2.0;
		n++;
	}

	cout << (q == tn ? "YES" : "NO");
}