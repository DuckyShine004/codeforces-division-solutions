#include <iostream>
#include <vector>
 
using namespace std;
 
int maximum_increase(int n) {
    vector<int> arr(n);

    for (int &in : arr) {
        cin >> in;
    }
 
    int max = 0;
 
    for (int i = 0; i < n - 1; i++) {
        int count = 1;
 
        for (int j = i + 1; j < n; j++) {
            if (arr[j] <= arr[j - 1]) {
                break;
            }
 
            count++;
        }
 
        if (max < count) {
            max = count;
        }
 
        if (max == n || n - i <= max) {
            break;
        }
    }
 
    return (n == 1 ? 1 : max);
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int n;
    cin >> n;
 
    cout << maximum_increase(n);
}
