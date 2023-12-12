#include <iostream>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;
    cin >> n >> m;

    map<string, string> smap;

    string a, b, s;

    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        smap[a] = b;
    }
    
    for (int i = 0; i < n; i++) {
        cin >> s;
        cout << (s.size() <= smap[s].size() ? s : smap[s]) << "\n";
    }
}