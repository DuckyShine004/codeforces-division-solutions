#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, k;
	
	cin >> n;
	cin >> k;

	vector<int> arr(n);

	for (int &in : arr) {
		cin >> in;
	}

	int req = arr[k-1];
	int res = 0;

	for (int i = 0; i < n; i++) {
		if (arr[i] >= req && arr[i] > 0) {
			res++;
		}
	}

	cout << res;
}