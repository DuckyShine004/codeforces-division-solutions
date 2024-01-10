#include <map>
#include <iostream>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, in;
    cin >> n;
    
    map<int, int> nums;
    
    while (n--) {
        cin >> in;
        nums[in]++;
    }
    
    int k, v;
    int a, b;
    
    int res = 0;
    
    // Check which keys are available
    while (true) {
        a = b = 0;
        
        for (int i = 0; i < 2; i++) {
            for (auto num : nums) {
                k = num.first;
                v = num.second;
            
                if (v >= 2) {
                    nums[k] -= 2;

                    if (a == 0) {
                        a = v;
                    } else {
                        b = v;
                    }

                    break;
                }
            }
        }
        
        if (a > 0 && b > 0) {
            res++;
        } else {
            break;
        }
    }
    
    cout << res;
}