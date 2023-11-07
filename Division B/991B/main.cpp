#include <algorithm>
#include <numeric>
#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	double sum;
	cin >> n;

	vector<int> A(n);

	for (int &num : A) {
		cin >> num;
		sum += num;
	}

	// Sort the vector
	sort(A.begin(), A.end());

	int avg = round(sum / n);

	int res = 0; 
	int i = 0;

	while (avg < 5) {

		// Redo the lab work
		if (A[i] < 5) {
			sum += 5 - A[i];
			avg = round(sum / n);

			res++;
		}

		i++;
	}

	cout << res;
}