#include <vector>
#include <iostream>
#include <algorithm>
 
using namespace std;

void solve() {
    int n, m;
    cin >> n;

    m = 2 * n;

    vector<int> A(m);

    for (int &num : A) {
        cin >> num;
    }

    sort(A.begin(), A.end());

    cout << abs(A[n-1] - A[n]) << endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}