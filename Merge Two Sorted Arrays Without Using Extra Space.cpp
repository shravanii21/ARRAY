#include <iostream>
#include <algorithm>
using namespace std;

void merge(int arr1[], int arr2[], int n, int m) {
    int i = n - 1;
    int j = 0;

    // Swap elements to ensure all smaller elements are in arr1
    while(i >= 0 && j < m && arr1[i] > arr2[j]) {
        swap(arr1[i--], arr2[j++]);
    }

    // Sort both arrays
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
}

int main() {
    int n = 5, m = 4;
    int arr1[5] = {1, 3, 5, 7, 9};
    int arr2[4] = {2, 4, 6, 8};

    merge(arr1, arr2, n, m);

    cout << "Merged arrays:\nArray 1: ";
    for(int i = 0; i < n; i++) cout << arr1[i] << " ";
    cout << "\nArray 2: ";
    for(int i = 0; i < m; i++) cout << arr2[i] << " ";

    return 0;
}

