#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, c;
	cin >> n >> c;

	vector<int> A(n);

	for (int &a : A) {
		cin >> a;
	}

	int res = 1;

	for (int i = 1; i < n; i++) {
		res++;
		
		if (A[i] - A[i - 1] > c) {
			res = 1;
		}
	}

	cout << res;
}