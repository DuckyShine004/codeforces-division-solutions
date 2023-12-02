#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    
    int n, k;
    cin >> n >> k;
    
    cout << (3 * n) + min(k - 1, n - k);
}

