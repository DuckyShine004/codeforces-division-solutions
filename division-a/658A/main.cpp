#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, c;
	cin >> n >> c;

	vector<int> P(n);
	vector<int> T(n);

	int l, r, dl, dr;

	for (int &p : P) {
		cin >> p;
	}

	for (int &t : T) {
		cin >> t;
	}

	l = r = dl = dr = 0;

	for (int i = 0; i < n; i++) {
		dl += T[i];
		dr += T[n - i - 1];

		l += max(0, P[i] - (c * dl));
		r += max(0, P[n - i - 1] - (c * dr));
	}

	if (l > r) {
		cout << "Limak";
	} else if (l < r) {
		cout << "Radewoosh";
	} else {
		cout << "Tie";
	}
}