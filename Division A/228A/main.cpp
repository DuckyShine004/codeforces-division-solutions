#include <iostream>
#include <set>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    set<int> s;

    for (int i = 0; i < 4; i++) {
        int in;
        cin >> in;

        s.insert(in);
    }

    cout << 4 - s.size();
}