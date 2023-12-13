#include <iostream>
#include <cmath>

using namespace std;

#define N 8

int clamp(int x, int l, int r) {
    return (x == l) ? l : r;
}

int move_rook(int x1, int y1, int x2, int y2) {
    return clamp(abs(x1 - x2), 0, 1) + clamp(abs(y1 - y2), 0, 1);
}

int move_bishop(int x1, int y1, int x2, int y2) {
    if (x1 + y1 == x2 + y2 || N + y1 - x1 - 1 == N + y2 - x2 - 1) {
        return 1;
    }

    return (((x1 + y1) & 1) == ((x2 + y2) & 1)) ? 2 : 0;
}

int move_king(int x1, int y1, int x2, int y2) {
    return max(abs(x1 - x2), abs(y1 - y2));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int x1, y1, x2, y2;
    cin >> y1 >> x1 >> y2 >> x2;

    x1--;
    y1--;
    x2--;
    y2--;

    int x = move_rook(x1, y1, x2, y2);
    int y = move_bishop(x1, y1, x2, y2);
    int z = move_king(x1, y1, x2, y2);

    cout << x << " " << y << " " << z;
}