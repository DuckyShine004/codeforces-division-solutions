#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    
    int n, m, k;
    cin >> n >> m >> k;
    
    vector<ll> A(n);

    for (ll &a : A) {
        cin >> a;
    }

    sort(A.begin(), A.end());

    ll a = A[n - 1];
    ll b = A[n - 2];

    ll x = floor(m / (k + 1));
    ll y = m - x;

    cout << (b * x) + (a * y);
}
