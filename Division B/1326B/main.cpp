#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	vector<int> B(n);

	for (int &b : B) {
		cin >> b;
	}

	int x, a;
	x = a = 0;

	for (int i = 0; i < n; i++) {
		x = max(x, a);
		a = B[i] + x;

		cout << a << " ";
	}
}