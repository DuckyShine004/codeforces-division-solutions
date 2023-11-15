#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;

    vector<int> A;

    for (char c : s) {
        if (c != '+') {
            A.push_back((int) c - 48);
        }
    }

    sort(A.begin(), A.end());

    cout << A[0];

    for (int i = 1; i < A.size(); i++) {
        cout << '+' << A[i];
    }
}