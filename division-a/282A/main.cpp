#include <iostream>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    string s;

    cin >> n;

    int res = 0;

    for (int i = 0; i < n; i++) {
    	cin >> s;

    	if (s.find("++") != string::npos) {
    		res++;
    	} else {
    		res--;
    	}
    }

    cout << res;
}