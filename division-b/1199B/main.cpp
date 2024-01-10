#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

#define PI 3.14159265358979323846

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    double H, L;
    cin >> H >> L;

    double theta = atan(L / H);
    double gamma = PI - (2 * theta);
    
    double A = L / sin(gamma);

    cout << fixed << setprecision(13) << A - H;
}