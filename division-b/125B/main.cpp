#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s, t;
    cin >> s;

    vector<string> A;

    int i = 0;
    int n = s.length();

    int j;

    while (i < n) {
        j = i + 1;
        t = '<';

        while (j < n && s[j] != '<') {
            t += s[j];
            j++;
        }

        i = j;
        A.push_back(t);
    }

    int k = A.size();

    bool pre, cur;
    int h = 0;

    for (int i = 1; i < k; i++) {
        pre = A[i - 1].length() == 3;
        cur = A[i].length() == 3;

        cout << string(h, ' ') + A[i - 1] << "\n";

        if (pre && cur) {
            h += 2;
        }

        if (!pre && !cur) {
            h -= 2;
        }
    }

    cout << A[k - 1];
}
