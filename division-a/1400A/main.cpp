#include <iostream>
#include <string>
 
using namespace std;

void solve() {
    int n;
    string s;

    cin >> n >> s;

    cout << string(n, s[n - 1]) << endl;
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