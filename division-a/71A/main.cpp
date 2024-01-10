#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, size;
    string str;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> str;
        size = str.size();

        if (size > 10) {
            cout << str[0] << size - 2 << str[size - 1] << endl;
        } else {
            cout << str << endl;
        }
    }
}

