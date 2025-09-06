#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) cin >> arr[i];

    int maxSum = arr[0], currentSum = arr[0];
    for(int i = 1; i < n; i++) {
        currentSum = max(arr[i], currentSum + arr[i]);
        maxSum = max(maxSum, currentSum);
    }

    cout << "Maximum contiguous subarray sum: " << maxSum << endl;

    return 0;
}

