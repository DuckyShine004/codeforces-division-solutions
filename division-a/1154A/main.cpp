#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    vector<int> X(4);

    for (int &x : X) {
        cin >> x;
    }

    sort(X.begin(), X.end());
    
    int a, b, c;

    b = (X[2] + X[0] - X[1]) / 2;
    a = X[0] - b;
    c = X[1] - a;

    cout << a << " " << b << " " << c;
}