#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long n, k;
	cin >> n >> k;

	cout << ((n / k) & 1 ? "YES" : "NO");
}