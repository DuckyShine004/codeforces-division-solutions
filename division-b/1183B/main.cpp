#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void solve() {
	int n, k;
	cin >> n >> k;

	vector<int> arr(n);

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	// greedy: the optimal solution is to pick B = min(arr) + k
	int B = *min_element(arr.begin(), arr.end()) + k;

	// then check if |arr[i] - B| <= k
	bool flag = true;

	for (int i = 0; i < n; i++) {
		if (abs(arr[i] - B) > k) {
			flag = false;
			break;
		}
	}

	cout << (flag ? B : -1) << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int q;
	cin >> q;

	while (q--) {
		solve();
	}
}