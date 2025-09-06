#include <iostream>
using namespace std;

long long mergeAndCount(int arr[], int l, int m, int r) {
    int left[m - l + 1], right[r - m];
    for(int i = 0; i < m - l + 1; i++) left[i] = arr[l + i];
    for(int i = 0; i < r - m; i++) right[i] = arr[m + 1 + i];

    int i = 0, j = 0, k = l;
    long long inv = 0;

    while(i < m - l + 1 && j < r - m) {
        if(left[i] <= right[j]) arr[k++] = left[i++];
        else {
            arr[k++] = right[j++];
            inv += (m - l + 1 - i);  // All remaining elements in left are greater
        }
    }

    while(i < m - l + 1) arr[k++] = left[i++];
    while(j < r - m) arr[k++] = right[j++];
    return inv;
}

long long mergeSort(int arr[], int l, int r) {
    long long inv = 0;
    if(l < r) {
        int m = (l + r) / 2;
        inv += mergeSort(arr, l, m);
        inv += mergeSort(arr, m + 1, r);
        inv += mergeAndCount(arr, l, m, r);
    }
    return inv;
}

int main() {
    int arr[] = {2, 4, 1, 3, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Inversion count: " << mergeSort(arr, 0, n - 1) << endl;
    return 0;
}

