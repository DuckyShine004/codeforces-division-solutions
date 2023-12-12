#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> A(4);

	for (int &a : A) {
		cin >> a;
	}

	string s;
	cin >> s;

	int res = 0;

	for (char c : s) {
		res += A[((int) c - 49)];
	}

	cout << res;
}