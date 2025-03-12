#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int n,a;
    
    cin >> n >> a;
    vector<int>arr(n);
    for (int i = 0;i < n;++i) cin >> arr[i];
    int x = n;
    int s;
    if (arr[a - 1] == 1) s = 1;
    else s = 0;
    int i = a-1, j = a, k = a - 2;
    while (x--) {
        if (k != -1 && j != n) {
            if (arr[k] == 1 && arr[j] == 1) s+=2;
 
        }
        else {
            break;
        }
        k--;
        j++;
    }
    if (k == -1) {
        for (int i = j;i < n;++i) {
            if (arr[i] == 1) s++;
        }
    }
    else if (j == n) {
        for (int i = k;i >= 0;i--) {
            if (arr[i] == 1) s++;
        }
    }
    cout << s;
 
 
    return 0;
}