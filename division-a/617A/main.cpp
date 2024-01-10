#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int x;
	cin >> x;

	if (x <= 5) {
		cout << 1;
		return 0;
	}
	
	cout << (x % 5 == 0 ? x / 5 : (x / 5) + 1);
}