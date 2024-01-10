#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;
    cin >> n;

    int in;
    int res = 0;

    for (int i = 0; i < n; i++) {
        k = 0;

        for (int j = 0; j < 3; j++) {
            cin >> in;

            if (in) {
                k++;
            }
        }

        if (k >= 2) {
            res++;
        }
    }

    cout << res;
}

