#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// Check at the end if the schedule
	int n;
	cin >> n;

	vector<int> a(n);

	for (int &num : a) {
		cin >> num;
	}

	int k = 0;
	int out = 0;

	bool flag = true;

	for (int i = 0; i < n; i++) {
		flag = (a[i] == 1);

		k = (flag ? k + 1 : 0);

		if (k > out) {
			out = k;
		}
	}

	// Check the start and end
	int s = 0;
	int e = n-1;

	while (a[s] == 1){
		s++;
	}

	while (a[e] == 1) {
		e--;
	}

	out = max(out, (n-e-1)+s);

	cout << out;
}