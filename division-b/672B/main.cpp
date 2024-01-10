#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    string s;

    unordered_set<char> cset;

    cin >> n >> s;

    if (n > 26) {
        cout << -1;
        return 0;
    }

    for (char c : s) {
        cset.insert(c);
    }

    cout << n - cset.size();
}
