#include <iostream>
using namespace std;

// Linear Search Implementation
int linearSearch(int arr[], int n, int target) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 10, 40, 50, 60, 70};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 10;
    
    cout << "Using Linear Search:" << endl;
    int result = linearSearch(arr, n, target);
    if(result == -1) {
        cout << "Element not found" << endl;
    } else {
        cout << "Element found at index: " << result << endl;
    }
    
    return 0;
}
