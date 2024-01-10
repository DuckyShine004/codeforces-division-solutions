#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, k, in;
	cin >> n >> k;

	vector<int> A(n);

	for (int &a : A) {
		cin >> a;
	}

	sort(A.begin(), A.end());

	bool flag = true;
	int res = 0;

	for (int i = 0; i < n; i++) {
		if (A[i] + k > 5) {
			flag = false;
		}

		if ((i + 1) % 3 == 0) {
			res += (int) flag;
			flag = true;
		}
	}

	cout << res;
}