#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    string s;

    map<string, int> s_map;

    s_map["Tetrahedron"] = 4;
    s_map["Cube"] = 6;
    s_map["Octahedron"] = 8;
    s_map["Dodecahedron"] = 12;
    s_map["Icosahedron"] = 20;

    int res = 0;

    for (int i = 0; i < n; i++) {
        cin >> s;
        res += s_map[s];
    }

    cout << res;
}