#include <iostream>
#include <vector>
using namespace std;

void printLeaders(int arr[], int n) {
    int max_from_right = arr[n-1];
    cout << max_from_right << " ";
    for(int i=n-2; i>=0; i--) {
        if(arr[i] > max_from_right) {
            max_from_right = arr[i];
            cout << max_from_right << " ";
        }
    }
}

int main() {
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Leaders in array: ";
    printLeaders(arr, n);
    return 0;
}

