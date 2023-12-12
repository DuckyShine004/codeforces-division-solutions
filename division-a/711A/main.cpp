#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	string s, t;

	cin >> n;

	vector<string> A(n);

	for (string &a : A) {
		cin >> a;
	}

	bool flag = false;

	for (int i = 0; i < n; i++) {
		t = A[i];

		if (t[0] == 'O' && t[1] == 'O') {
			A[i] = "++" + t.substr(2, 3);
			flag = true;

			break;
		}

		if (t[3] == 'O' && t[4] == 'O') {
			A[i] = t.substr(0, 3) + "++";
			flag = true;

			break;
		}
	}

	if (!flag) {
		cout << "NO";
		return 0;
	}

	cout << "YES" << endl;

	for (int j = 0; j < n; j++) {
		cout << A[j] << endl;
	}
}