#include <iostream>

using namespace std;

struct Point {
    int x;
    int y;
};

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num;

    Point point;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> num;

            if (num == 1) {
                point.x = j;
                point.y = i;

                break;
            }
        }
    }

    cout << abs(point.x - 2) + abs(point.y - 2);
}