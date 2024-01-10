#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, a, b, c;

    cin >> n;

    vector<int> arr(n);
    bool flag = false;

    for (int &a : arr) {
        cin >> a;
    }

    sort(arr.begin(), arr.end());

    for (int i = 0; i <= n - 3; i++) {
        a = arr[i];
        b = arr[i + 1];
        c = arr[i + 2];

        if (a + b > c) {
            flag = true;
            break;
        }
    }

    cout << (flag ? "YES" : "NO");
}
