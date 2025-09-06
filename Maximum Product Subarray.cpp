#include <iostream>
using namespace std;

int maxProduct(int arr[], int n) {
    int maxEnd = arr[0], minEnd = arr[0], res = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < 0) swap(maxEnd, minEnd);
        maxEnd = max(arr[i], maxEnd * arr[i]);
        minEnd = min(arr[i], minEnd * arr[i]);
        res = max(res, maxEnd);
    }
    return res;
}

int main() {
    int arr[] = {2, 3, -2, 4};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Maximum product subarray: " << maxProduct(arr, n);
    return 0;
}

