#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	string s;

	cin >> n >> s;

	vector<int> A;

	int idx, ndx, cur;
	idx = 0;

	while (idx < n) {
		cur = 0;
		ndx = idx;

		while (s[ndx] == 'B') {
			ndx++;
			cur++;
		}

		idx = ndx + 1;

		if (cur > 0) {
			A.push_back(cur);
		}
	}

	cout << A.size() << endl;

	for (int i = 0; i < A.size(); i++) {
		cout << A[i] << " ";
	}
}