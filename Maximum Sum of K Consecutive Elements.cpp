#include <iostream>
using namespace std;

int maxSumK(int arr[], int n, int k) {
    int max_sum = 0, curr_sum = 0;

    for(int i=0; i<k; i++)
        curr_sum += arr[i];

    max_sum = curr_sum;

    for(int i=k; i<n; i++) {
        curr_sum += arr[i] - arr[i-k];
        if(curr_sum > max_sum)
            max_sum = curr_sum;
    }

    return max_sum;
}

int main() {
    int arr[] = {2, 1, 5, 1, 3, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;

    cout << "Maximum sum of " << k << " consecutive elements: " << maxSumK(arr, n, k) << endl;
    return 0;
}

