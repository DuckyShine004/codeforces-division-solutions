#include <iostream>
#include <string.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string num;
	cin >> num;

	uint64_t count = 0;

	// Get the number of digits that are 4 or 7
	for (int i=0; i<num.size(); i++) {
		if (num[i] == '4' || num[i] == '7') {
			count++;
		}
	}

	string strCount = to_string(count);

	// Check if the number of digits is lucky number
	for (int i=0; i<strCount.size(); i++) {
		if (strCount[i] != '4' && strCount[i] != '7') {
			cout << "NO";
			return 0;
		}
	}

	cout << "YES";
}