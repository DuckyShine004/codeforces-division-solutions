#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	// Check if there are only 2 elements
	if (n == 2) {
		cout << 0;
		return 0;
	}

	vector<int> a(n);

	for (int &num : a) {
		cin >> num;
	}

	int out = 1e5;

	sort(a.begin(), a.end());

	// Check if removing the last element does anything
	out = min(out, a[n-2] - a[0]);

	// Check if removing the first element does anything
	out = min(out, a[n-1] - a[1]);
	
	cout << out;
}