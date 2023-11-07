#include <set>
#include <iostream>
#include <vector>

using namespace std;

void solve() {
	int n;
	cin >> n;

	vector<int> arr(n);

	// Get the initial elements
	for (int &num : arr) {
		cin >> num;
	}

	// Get the set of elements
	set<int> s{begin(arr), end(arr)};

	cout << s.size() << endl;
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