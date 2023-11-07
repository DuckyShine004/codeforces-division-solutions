#include <vector>
#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, a, b;
	cin >> n;

	vector<int> d(n-1);

	for (int &num : d) {
		cin >> num;
	}

	cin >> a >> b;

	int res = 0;

	for (int i = a-1; i < b-1; i++) {
		res += d[i];
	}

	cout << res;
}