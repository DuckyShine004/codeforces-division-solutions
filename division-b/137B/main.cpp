#include <set>
#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	set<int> a;

	int in;
	for (int i = 0; i < n; i++) {
		cin >> in;

		if (in <= n) {
			a.insert(in);
		}
	}

	cout << n - a.size();
}