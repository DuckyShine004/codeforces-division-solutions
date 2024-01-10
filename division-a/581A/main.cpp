#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b;
	cin >> a >> b;

	int x = min(a, b);

	a -= x;
	b -= x;

	int y = max({0, a, b}) / 2;

	cout << x << " " << y;
}