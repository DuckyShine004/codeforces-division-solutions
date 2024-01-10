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

	for (int &a : A) {
		cin >> a;
	}

	int res = 0;

	for (int i = 1; i < n; i++) {
		bool isSmall = true;
		bool isLarge = true;

		for (int j = 0; j < i; j++) {
			if (A[i] >= A[j]) {
				isSmall = false;
			}

			if (A[i] <= A[j]) {
				isLarge = false;
			}
		}

		if (isSmall || isLarge) {
			res++;
		}
	}

	cout << res;
}