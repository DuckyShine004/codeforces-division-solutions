#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    string s;

    cin >> n >> s;

    int j = 0;
    int k = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'F') {
            continue;
        } else if (s[i] == 'A') {
            j++;
        } else {
            k++;
        }
    }

    if (k == 0) {
        cout << j;
    } else if (k == 1) {
        cout << 1;
    } else {
        cout << 0;
    }
}
