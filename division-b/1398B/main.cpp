#include <algorithm> 
#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;

	while (t--) {
		string str;
		cin >> str;

		int n = str.length();
		int i, j;

		i = 0;
		j = 0;

		vector<int> arr;

		while (i < n && j < n) {
			// Get the number of occurence of the number 1
			while (str[i] == '1' && i < n) {
				i++;
			}

			arr.push_back(i-j);
			j = i;


			// Find the next one
			while (str[j] != '1' && j < n) {
				j++;
			}

			i = j;
		}

		int res = 0;

		// Sort the array in descending order
		sort(arr.rbegin(), arr.rend());

		// The optimal solution is every two slots in the array
		for (int k = 0; k < arr.size(); k += 2) {
			res += arr[k];
		}

		cout << res << endl;
	}
}