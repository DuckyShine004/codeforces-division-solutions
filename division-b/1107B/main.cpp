#include <iostream>

using namespace std;

typedef long long ll;


void solve(ll k, ll x) {
	cout << (k > 1 ? x + (9 * (k - 1)) : x) << "\n";	
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    
    int n;
	ll k, x;
    cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> k >> x;
		solve(k, x);
	}
}
