#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, num;
	cin >> N;

	int m_col_sum, m_row_sum;
	int d_diag_sum, u_diag_sum;

	m_col_sum = 0;
	m_row_sum = 0;
	d_diag_sum = 0;
	u_diag_sum = 0;

	int m;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> num;
			
			// The down diagonal sum
			if (i == j) {
				d_diag_sum += num;
			}

			// The up diagonal sum
			if (N-i-1 == j) {
				u_diag_sum += num;
			}

			// // the middle column
			if (j == N / 2) {
				m_col_sum += num;
			}

			// // The middle row
			if (i == N / 2) {
				m_row_sum += num;
			}

			// The middlemost element
			if (i == N / 2 && j == N / 2) {
				m = num;
			}
		}
	}

	cout << m_col_sum + m_row_sum + d_diag_sum + u_diag_sum - (3 * m);
}