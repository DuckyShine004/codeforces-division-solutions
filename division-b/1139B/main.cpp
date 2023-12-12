#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    int n;
    cin >> n;
    
    vector<long long> A(n);

    for (long long &a : A) {
        cin >> a;
    }
    
    long long res = A[n - 1];
    
    for (int i = n - 2; i >= 0; i--) {
        if (A[i] >= A[i + 1]) {
            A[i] = max(0LL, A[i + 1] - 1);
        }
        
        res += A[i];
    }

    cout << res << endl;
}

