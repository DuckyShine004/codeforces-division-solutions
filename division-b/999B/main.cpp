#include <cmath>
#include <vector>
#include <iostream>

using namespace std;

void reverse_string(string &s, int n) {
	int a = 0;
	int b = n-1;

	while (a < b) {
		int temp = s[a];
		s[a] = s[b];
		s[b] = temp;

		a++;
		b--;
	}
}

int main() {
	int n;
	string s;

	cin >> n >> s;

	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			reverse_string(s, i);
		}
	}

	cout << s;
}