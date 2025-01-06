#include <iostream>
using namespace std;

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
	cout<<"====================="<<endl;
	cout<<"Rival Adistia Nugraha"<<endl;
	cout<<"     231011401067    "<<endl;
	cout<<"====================="<<endl;
    int arr[] = {2, 3, 4, 10, 40, 50, 60, 70};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 10;
    
    cout << "Using Binary Search:" << endl;
    int result = binarySearch(arr, 0, n-1, target);
    if(result == -1) {
        cout << "Element not found" << endl;
    } else {
        cout << "Element found at index: " << result << endl;
    }
    
    return 0;
}
