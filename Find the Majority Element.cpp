#include <iostream>
using namespace std;

int majorityElement(int arr[], int n) {
    int count = 0, candidate = -1;

    // Find candidate
    for(int i=0; i<n; i++) {
        if(count == 0) {
            candidate = arr[i];
            count = 1;
        }
        else if(arr[i] == candidate)
            count++;
        else
            count--;
    }

    // Verify candidate
    count = 0;
    for(int i=0; i<n; i++) {
        if(arr[i] == candidate)
            count++;
    }

    if(count > n/2)
        return candidate;
    else
        return -1;
}

int main() {
    int arr[] = {2, 2, 1, 1, 2, 2, 2};
    int n = sizeof(arr)/sizeof(arr[0]);

    int maj = majorityElement(arr, n);
    if(maj != -1)
        cout << "Majority element is: " << maj << endl;
    else
        cout << "No majority element found" << endl;
    return 0;
}

