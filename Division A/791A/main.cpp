#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b;
    cin >> a >> b;

    int res = 0;

    while (a <= b) {
        a *= 3;
        b *= 2;

        res++;
    }

    cout << res;
}