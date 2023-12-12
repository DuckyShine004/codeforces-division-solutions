#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t, j;
    unsigned long long n;

    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> n;
        j = log2(n);

        if (j == ceil(log2(n))) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
}

