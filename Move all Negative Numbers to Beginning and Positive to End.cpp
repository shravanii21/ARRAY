#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) cin >> arr[i];

    int left = 0, right = n - 1;
    while(left <= right) {
        if(arr[left] < 0)
            left++;
        else if(arr[right] >= 0)
            right--;
        else {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }

    cout << "Rearranged array: ";
    for(int i = 0; i < n; i++) cout << arr[i] << " ";

    return 0;
}

