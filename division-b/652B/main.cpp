#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	vector<int> A(n);
	vector<int> B(n);

	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}

	// Sort the array
	sort(A.begin(), A.end());

	int l = 0;
	int r = n - 1;
	int k = 0;

	bool flag = true;

	while (k < n) {
		if (flag) {
			B[k] = A[l];
			l++;
		} else {
			B[k] = A[r];
			r--;
		}
		
		k++;
		flag = !flag;
	}

	// Check if the sequence of numbers are valid
	for (int i = 1; i < n; i++) {
		if (i & 1) {
			if (B[i] < B[i-1]) {
				cout << "Impossible";
				return 0;
			}
		} else {
			if (B[i] > B[i-1]) {
				cout << "Impossible";
				return 0;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		cout << B[i] << " ";
	}
}