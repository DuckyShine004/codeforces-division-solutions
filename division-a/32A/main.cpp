#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, d;
	cin >> n >> d;

	vector<int> A(n);

	for (int &a : A) {
		cin >> a;
	}

	int res = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j || abs(A[i] - A[j]) > d) {
				continue;
			}

			res++;
		}
	}

	cout << res;
}