#include <iostream>
#include <vector>
#include <algorithm>

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

	sort(A.begin(), A.end());

	int a = 0;
	int b = n - 1;

	long long x, y;
	x = y = 0;

	while (a < b) {
		y += A[a];
		x += A[b];

		a++;
		b--;
	}

	if (n & 1) {
		x += A[n / 2];
	}
	
	cout << (x * x) + (y * y);
}