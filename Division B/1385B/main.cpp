#include <iostream>
#include <vector>
#include <set>

using namespace std;

void solve() {
	int n, num;
	cin >> n;

	vector<int> A(n);
	vector<int> B(2 * n);

	set<int> i_set;

	int idx = n - 1;

	for (int &b : B) {
		cin >> b;
	}

	for (int i = (2 * n) - 1; i >= 0; i--) {
		if (i_set.find(B[i]) == i_set.end()) {
			i_set.insert(B[i]);
			
			A[idx] = B[i];
			idx--;
		}

		if (idx < 0) {
			break;
		}
	}

	for (int a : A) {
		cout << a << " ";
	}

	cout << "\n";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;

	while (t--) {
		solve();
	}
}