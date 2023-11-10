#include <iostream>
#include <string.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	int suite_type = n - 10;

	if (suite_type == 10) {
		cout << 4 * 4 - 1;
	} else if (suite_type > 0 && suite_type <= 11){
		cout << 4;
	} else {
		cout << 0;
	}
}