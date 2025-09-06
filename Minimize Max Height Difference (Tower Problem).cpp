#include <iostream>
#include <algorithm>
using namespace std;

int getMinDiff(int arr[], int n, int k) {
    sort(arr, arr + n);
    int ans = arr[n-1] - arr[0];

    int smallest = arr[0] + k;
    int largest = arr[n-1] - k;

    for(int i = 1; i < n; i++) {
        int minVal = min(smallest, arr[i] - k);
        int maxVal = max(largest, arr[i-1] + k);
        if(minVal < 0) continue;
        ans = min(ans, maxVal - minVal);
    }

    return ans;
}

int main() {
    int n, k;
    cout << "Enter number of towers: ";
    cin >> n;
    int arr[n];
    cout << "Enter tower heights: ";
    for(int i = 0; i < n; i++) cin >> arr[i];
    cout << "Enter value of K: ";
    cin >> k;

    cout << "Minimum difference after modifying: " << getMinDiff(arr, n, k) << endl;
    return 0;
}

