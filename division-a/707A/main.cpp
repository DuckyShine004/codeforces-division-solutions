#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;

	char c;
	bool flag = true;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> c;

			if (c == 'C' || c == 'M' || c == 'Y') {
				flag = false;
				break;
			}
		}
	}

	cout << (flag ? "#Black&White" : "#Color");
}