#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    int cur = 0, _max = 0;

    for (int i = 0; i < n; i++) {
        int a, b;
        
        cin >> a;
        cin >> b;

        cur -= a;
        cur += b;

        _max = max(_max, cur);
    }

    cout << _max;
}