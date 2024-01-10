#include <iostream>
#include <string>
 
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    string s;
    cin >> s;

    int n, k;

    n = s.size();
    k = 0;

    for (char c : s) {
        if (c == 'a') {
            k++;
        }
    }

    cout << (k > n - k ? n : 2 * k - 1);
}