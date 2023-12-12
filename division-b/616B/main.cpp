#include <algorithm>
#include <iostream>
#include <vector>

#define INF 1e9;

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int c, n, m;	
	cin >> n >> m;

	vector<int> A(n);

	for (int i = 0; i < n; i++) {
		int _min = INF;

		for (int j = 0; j < m; j++) {
			cin >> c;
			_min = min(_min, c);
		}	

		A.push_back(_min);
	}

	cout << *max_element(A.begin(), A.end());
}