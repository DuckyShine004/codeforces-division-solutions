#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	vector<int> A(n);

	int p;

	for (int i = 0; i < n; i++) {
		cin >> p;

		A[p - 1] = i + 1;
	}

	for (int j = 0; j < n; j++) {
		cout << A[j] << " ";
	}
}