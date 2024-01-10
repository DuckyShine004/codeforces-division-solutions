#include <iostream>
#include <vector>
#include <string>

using namespace std;

long long combination(int n, int r) {
    if (r == 0 || r == n) {
        return 1;
    }
    if (r == 1) {
        return n;
    }

    return combination(n - 1, r - 1) + combination(n - 1, r);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	vector<string> A(n);

	for (string &s : A) {
		cin >> s;
	}

	int dr, dc;
	int res = 0;

	for (int i = 0; i < n; i++) {
		dr = dc = 0;

		for (int j = 0; j < n; j++) {
			dr += (A[i][j] == 'C') ? 1 : 0;
			dc += (A[j][i] == 'C') ? 1 : 0;
		}

		res += (dr > 1) ? combination(dr, 2) : 0;
		res += (dc > 1) ? combination(dc, 2) : 0;
	}

	cout << res;
}