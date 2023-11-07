#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

struct comp {
    bool operator()(const pair<int,int> &a, const pair<int,int> &b) {
        return a.second > b.second;
    }
};
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;

	vector<pair<int, int>> A(m);

	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;

		A.push_back(make_pair(a, b));
	}

	sort(A.begin(), A.end(), comp());

	int k, res;
	k = res = 0;

	while (n > 0 && k < m) {
		pair<int, int> match = A[k];
		int p = min(n, match.first);

		res += p * match.second;
		n -= p;

		k++;
	}

	cout << res;
}