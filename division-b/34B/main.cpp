#include <algorithm>
#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;

	vector<int> A(n);

	for (int &num : A) {
		cin >> num;
	}

	sort(A.begin(), A.end());

	int i, res;
	i = res = 0;

	while (i < m && A[i] < 0) {
		res -= A[i];
		i++;
	}
	
	cout << res;
}