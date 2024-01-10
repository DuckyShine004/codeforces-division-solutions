#include <cctype>
#include <string>
#include <iostream>

using namespace std;

bool isVowel(char c) {
	char vowels[] = {'a', 'e', 'i', 'o', 'u', 'y'};

	for (char vowel : vowels) {
		if (c == vowel) {
			return true;
		}
	}

	return false;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s;
	getline(cin, s);

	char c;

	for (int i = s.size() - 1; i >= 0; i--) {
		if (!(s[i] == '?' || s[i] == ' ')) {
			c = s[i];
			break;
		}
	}

	cout << (isVowel(tolower(c)) ? "YES" : "NO");
}