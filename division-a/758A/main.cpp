#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	vector<int> A(n);

	for (int &a : A) {
		cin >> a;
	}

	int _max = *max_element(A.begin(), A.end());
	int res = 0;

	for (int i = 0; i < n; i++) {
		res += _max - A[i];
	}

	cout << res;
}