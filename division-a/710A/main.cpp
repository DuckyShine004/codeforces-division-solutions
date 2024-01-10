#include <iostream>

using namespace std;

#define N 8

bool is_valid(int x, int y) {
    return x >= 0 && x < N && y >= 0 && y < N;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    pair<int, int> directions[8] = {
        {-1, 0},
        {1, 0},
        {0, -1},
        {0, 1},
        {-1, -1},
        {1, 1},
        {-1, 1},
        {1, -1},
    };

    string pos;
    cin >> pos;

    int dx, dy;

    int y = (int) pos[1] - 49;
    int x = (int) pos[0] - 97;

    int res = 0;

    for (pair<int, int> direction : directions) {
        dx = x + direction.first; 
        dy = y + direction.second;

        res += is_valid(dx, dy);
    }

    cout << res;
}