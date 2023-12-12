#include <iostream>
#include <string.h>
 
using namespace std;
 
int solve_left(const string& str, int pos) {
    int res = 0;
 
    for (int i = pos - 1; i >= 0; i--) {
        if (str[i] == 'Q') {
            res++;
        }
    }
 
    return res;
}
 
int solve_right(const string& str, int pos, int length) {
    int res = 0;
 
    for (int i = pos + 1; i < length; i++) {
        if (str[i] == 'Q') {
            res++;
        }
    }
 
    return res;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    string str;
    cin >> str;
 
    int out = 0;
    int n = str.length();
 
    for (int i = 0; i < n; i++) {
        if (str[i] == 'A') {
            int p = solve_left(str, i);
            int q = solve_right(str, i, n);
 
            out += p * q;
        }
    }
 
    cout << out;
}