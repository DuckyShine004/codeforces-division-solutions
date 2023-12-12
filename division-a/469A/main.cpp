#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[100];
    memset(arr, 0, sizeof(arr));

    int n, p, in;
    cin >> n;
    cin >> p;

    int res = 0;

    // Check the levels of X
    for (int i = 0; i < p; i++) {
        cin >> in;
        arr[in] = 1;
    }

    cin >> p;

    // Check the levels of Y
    for (int j = 0; j < p; j++) {
        cin >> in;
        arr[in] = 1;
    }

    // Check the validity of each index
    for (int k = 1; k <= n; k++) {
        if (arr[k]) {
            res++;
        }
    }

    if (res == n) {
        cout << "I become the guy.";
    } else {
        cout << "Oh, my keyboard!";
    }
}

