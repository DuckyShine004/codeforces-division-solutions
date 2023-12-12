#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, k;
	cin >> n >> k;

	vector<int> A(n);

	for (int &num : A) {
		cin >> num;
	}

	int count = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			if (count == k-1) {
				cout << A[j];
				return 0;
			}

			count++;
		}
	}
}