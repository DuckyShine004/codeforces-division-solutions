#include <iostream>
#include <set>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, x, y;
	cin >> n >> m;

	set<int> i_set;



	for (int i = 0; i < n; i++) {
		cin >> x;

		for (int j = 0; j < x; j++) {
			cin >> y;
			i_set.insert(y);
		}
	}

	cout << (i_set.size() == m ? "YES" : "NO");
}