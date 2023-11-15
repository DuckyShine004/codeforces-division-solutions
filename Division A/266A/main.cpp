#include <iostream>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    string s;

    cin >> n >> s;

    int i, j, res;
    i = res = 0;

    while (i < n) {
        j = i;

        while (s[j] == s[i]) {
            j++;
        }

        if (j - i - 1 > 0) {
            res += j - i - 1;
        }

        i = j;
    }

    cout << res;
}