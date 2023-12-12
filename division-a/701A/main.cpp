#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, in;
	cin >> n;

	vector<pair<int, int>> A(n);

	for (int i = 0; i < n; i++) {
		cin >> in;
		A[i] = {in, i};
	}

	sort(A.begin(), A.end());

	for (int j = 0; j < n / 2; j++) {
		cout << A[j].second + 1 << " " << A[n - j - 1].second + 1 << endl;
	}
}