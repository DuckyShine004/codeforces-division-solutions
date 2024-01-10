#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int d1, d2, d3;
	cin >> d1 >> d2 >> d3;

	int dx = min(d1 + d3, d2);
	int dy = min(d2 + d3, d1);
	int dz = min(d1 + d2, d3);

	cout << dx + dy + dz;
}