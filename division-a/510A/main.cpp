#include <iostream>

using namespace std;

void draw_a_mode(int m) {
	for (int i = 0; i < m; i++) {
		cout << '#';
	}

	cout << endl;
}

void draw_b_mode(int m) {
	cout << '#';

	for (int i = 0; i < m - 1; i++) {
		cout << '.';
	}

	cout << endl;
}

void draw_c_mode(int m) {
	for (int i = 0; i < m - 1; i++) {
		cout << '.';
	}

	cout << '#' << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		if (i % 2 != 0) {
			draw_a_mode(m);
		} else if (i % 4 == 0) {
			draw_b_mode(m);
		} else {
			draw_c_mode(m);
		}
	}
}