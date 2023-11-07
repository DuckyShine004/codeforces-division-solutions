#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    if (n < 3 || n % 2 != 0) {
        cout << "NO";
    } else {
        cout << "YES";
    }
}

