#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool first_pair_greater(const pair<int, int>& a, const pair<int, int>& b) {
	return a.first > b.first;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, a;
	cin >> n;

	vector<pair<int, int>> A(n);

	for (int i = 0; i < n; i++) {
		cin >> a;
		A[i] = {a, i};
	}

	sort(A.begin(), A.end(), first_pair_greater);

	int res = 0;

	for (int j = 0; j < n; j++) {
		res += (j * A[j].first) + 1;
	}

	cout << res << endl;

	for (int k = 0; k < n; k++) {
		cout << A[k].second + 1 << " ";
	}
}