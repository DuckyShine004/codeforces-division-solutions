#include <string>
#include <iostream>
#include <algorithm> 

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s, t;
	cin >> s >> t;

	reverse(t.begin(), t.end()); 

	cout << (s == t ? "YES" : "NO");
}