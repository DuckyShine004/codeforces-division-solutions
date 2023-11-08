#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;

    char c_max = 'a';

    map<char, int> c_map;

    for (char chr : s) {
        if ((int) chr > (int) c_max) {
            c_max = chr;
        }

        c_map[chr]++;
    }

    for (int i = 0; i < c_map[c_max]; i++) {
        cout << c_max;
    }
}