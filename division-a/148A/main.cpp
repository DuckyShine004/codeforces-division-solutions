#include <iostream>
#include <set>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	set<int> i_set;

	int k, l, m, n, d;
	cin >> k >> l >> m >> n >> d;

	for (int i = 1; i <= d; i++) {
		if (!(i % k && i % l && i % m && i % n)) {
			i_set.insert(i);
		}
	}

	cout << i_set.size();
}