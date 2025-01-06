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

// Binary Search Implementation
int binarySearch(int arr[], int left, int right, int target) {
    while(left <= right) {
        int mid = left + (right - left) / 2;
        
        if(arr[mid] == target) {
            return mid;
        }
        
        if(arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 10, 40, 50, 60, 70};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 10;
    
    // Linear Search
    cout << "Using Linear Search:" << endl;
    int linear_result = linearSearch(arr, n, target);
    if(linear_result == -1) {
        cout << "Element not found" << endl;
    } else {
        cout << "Element found at index: " << linear_result << endl;
    }
    
    // Binary Search
    cout << "\nUsing Binary Search:" << endl;
    int binary_result = binarySearch(arr, 0, n-1, target);
    if(binary_result == -1) {
        cout << "Element not found" << endl;
    } else {
        cout << "Element found at index: " << binary_result << endl;
    }
    
    return 0;
}
