#include <iostream>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;

    int asc = (int) s[0];
    char c = (asc >= 97 && asc <= 122) ? (char) (asc - 32) : s[0];

    cout << c + s.substr(1);
}