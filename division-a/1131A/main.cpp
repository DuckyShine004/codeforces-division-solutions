#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int w1, h1, w2, h2;
    cin >> w1 >> h1 >> w2 >> h2;

    int a1 = (2 * (w1 + h1 + 2)) - w2;
    int a2 = (2 * h2) + w2;

    cout << a1 + a2;
}