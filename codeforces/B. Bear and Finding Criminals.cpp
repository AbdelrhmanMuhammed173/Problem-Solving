#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int n, a;   
    cin >> n >> a;
    vector<int> arr(n); 
    for (int i = 0; i < n; ++i) cin >> arr[i];

    int x = n; // Number of cities
    int s; // Counter for caught criminals

    // Check if there is a criminal in Limak's starting position
    if (arr[a - 1] == 1) s = 1;
    else s = 0;

    int i = a - 1, j = a, k = a - 2; // Initialize pointers for checking both sides

    // Iterate through cities symmetrically around Limak's position
    while (x--) {
        if (k != -1 && j != n) {
            // If both symmetric cities have criminals, count both
            if (arr[k] == 1 && arr[j] == 1) s += 2;
        }
        else {
            break; 
        }
        k--;
        j++;
    }

    // If the left side is fully checked, process remaining right-side cities
    if (k == -1) {
        for (int i = j; i < n; ++i) {
            if (arr[i] == 1) s++;
        }
    }
    // If the right side is fully checked, process remaining left-side cities
    else if (j == n) {
        for (int i = k; i >= 0; i--) {
            if (arr[i] == 1) s++;
        }
    }

    cout << s;

    return 0;
}
