#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	double sum = 0.0;

	for (int i = 0; i < n; i++) {
		double in;
		cin >> in;

		sum += in;
	}

	cout << sum / (n * 1.0);
}