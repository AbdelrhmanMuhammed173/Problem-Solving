#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    if (n == 1) {
        cout << 1;
        return 0;
    }
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) cin >> arr[i];
 
    int mx = 1;
 
    for (int i = 0; i < n; ++i) {
        int s = 1; 
 
        for (int j = i; j < n - 1; ++j) {
            if (arr[j] >= arr[j + 1])
                s++;
            else
                break;
        }
 
        for (int k = i; k > 0; --k) {
            if (arr[k] >= arr[k - 1])
                s++;
            else
                break;
        }
 
        mx = max(mx, s);
    }
 
    cout << mx;
    return 0;
}