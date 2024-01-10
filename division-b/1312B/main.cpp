#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
	int n;
	cin >> n;

	vector<int> A(n);

	for (int &a : A) {
		cin >> a;
	}

	sort(A.begin(), A.end(), greater<int>());

	for (int a : A) {
		cout << a << " ";
	}

	cout << endl;
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