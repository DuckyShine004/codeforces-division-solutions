#include <iostream>
#include <string>
#include <set>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    string s;
    cin >> s;

    set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    set<char> even_digits = {'0', '2', '4', '6', '8'};

    int res = 0;

    for (char c : s) {
        int asc = (int) c;
        
        if (asc >= 97 && asc <= 122) {
            if (vowels.find(c) != vowels.end()) {
                res++;
            }
        } else {
            if (even_digits.find(c) == even_digits.end()) {
                res++;
            }
        }
    }

    cout << res;
}