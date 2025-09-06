#include <iostream>
#include <unordered_set>
using namespace std;

bool hasZeroSumSubarray(int arr[], int n) {
    unordered_set<int> sumSet;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (sum == 0 || sumSet.find(sum) != sumSet.end())
            return true;
        sumSet.insert(sum);
    }

    return false;
}

int main() {
    int arr[] = {4, 2, -3, 1, 6};
    int n = sizeof(arr)/sizeof(arr[0]);

    if (hasZeroSumSubarray(arr, n))
        cout << "Yes, subarray with 0 sum exists.";
    else
        cout << "No, subarray with 0 sum does not exist.";
    return 0;
}

