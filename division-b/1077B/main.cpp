#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    vector<int> A(n);

    for (int &a : A) {
        cin >> a;
    }

    int res = 0;

    for (int i = 1; i < n - 1; i++) {
        if (A[i] == 0 && A[i - 1] == 1 && A[i + 1] == 1) {
            A[i + 1] = 0;
            res++;
        }
    }

    cout << res;
}
