#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    
    int n, k;
    cin >> n >> k;

    vector<int> A(n);

    for (int &a : A) {
        cin >> a;
    }

    sort(A.begin(), A.end());
    
    int cur = 0;

    for (int i = 0; i < n; i++) {
        if (k == 0) {
            break;
        }
        
        A[i] -= cur;

        if (A[i] == 0) {
            continue;
        }

        cout << A[i] << "\n";

        cur += A[i];
        k--;
    }

    for (int j = 0; j < k; j++) {
        cout << 0 << "\n";
    }
}

