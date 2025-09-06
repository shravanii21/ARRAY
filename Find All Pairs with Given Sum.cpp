#include <iostream>
#include <unordered_set>
using namespace std;

void findPairs(int arr[], int n, int k) {
    unordered_set<int> s;

    cout << "Pairs with sum " << k << ": ";
    for (int i = 0; i < n; i++) {
        int target = k - arr[i];
        if (s.find(target) != s.end()) {
            cout << "(" << arr[i] << ", " << target << ") ";
        }
        s.insert(arr[i]);
    }
}

int main() {
    int arr[] = {1, 5, 7, -1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 6;

    findPairs(arr, n, k);
    return 0;
}

