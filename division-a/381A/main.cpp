#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int res[2] = {0, 0};

    vector<int> vi;

    int n, in;
    int l, r;

    int p = 0;

    cin >> n;

    for (r = 0; r < n; r++) {
        cin >> in;
        vi.push_back(in);
    }

    r--;
    l = 0;

    while (l <= r) {
        if (vi[l] < vi[r]) {
            res[p] = res[p] + vi[r];
            r--;
        } else {
            res[p] = res[p] + vi[l];
            l++;
        }

        p = !p; // Switch the players
    }

    cout << res[0] << " " << res[1];
}

