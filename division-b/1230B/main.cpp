#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;
    cin >> n >> k;
    
    string s;
    cin >> s;

    if (k == 0) {
        cout << s;
        return 0;
    }

    if (n == 1) {
        cout << '0';
        return 0;
    }

    int asc = (int) s[0];

    if (asc - 48 > 1) {
        s[0] = '1';
        k--;
    }

    for (int i = 1; i < n; i++) {
        if (k == 0) {
            break;
        }  
        
        asc = (int) s[i] - 48;

        if (asc == 0) {
            continue;
        }

        s[i] = '0';
        k--;
    }

    cout << s;
}
