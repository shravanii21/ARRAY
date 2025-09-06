#include <iostream>
using namespace std;

int equilibriumIndex(int arr[], int n) {
    int totalSum = 0;
    for(int i=0; i<n; i++)
        totalSum += arr[i];

    int leftSum = 0;
    for(int i=0; i<n; i++) {
        totalSum -= arr[i];
        if(leftSum == totalSum)
            return i;
        leftSum += arr[i];
    }
    return -1;  // No equilibrium index found
}

int main() {
    int arr[] = {-7, 1, 5, 2, -4, 3, 0};
    int n = sizeof(arr)/sizeof(arr[0]);

    int idx = equilibriumIndex(arr, n);
    if(idx != -1)
        cout << "Equilibrium index is: " << idx << endl;
    else
        cout << "No equilibrium index found" << endl;

    return 0;
}

