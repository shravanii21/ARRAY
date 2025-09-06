#include <iostream>
#include <algorithm>  // for sort
using namespace std;

int main() {
    int n, k;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter value of K: ";
    cin >> k;

    if(k > 0 && k <= n) {
        sort(arr, arr + n);
        cout << "The " << k << "-th smallest element is: " << arr[k - 1] << endl;
    } else {
        cout << "Invalid value of K!" << endl;
    }

    return 0;
}

