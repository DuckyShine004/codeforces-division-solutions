#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

#ifdef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout);
#endif

    int n, k;
    cin >> n >> k;

    vector<int> A(n);

    for (int &a : A) {
        cin >> a;
    }

    int i = k - 1;

    while (!A[i]) {
        i = (i + 1) % n;
    }

    cout << i + 1;
}
