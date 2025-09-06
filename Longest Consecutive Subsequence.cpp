#include <iostream>
#include <unordered_set>
using namespace std;

int longestConsecutive(int arr[], int n) {
    unordered_set<int> s;
    for (int i = 0; i < n; i++) s.insert(arr[i]);

    int maxLen = 0;

    for (int i = 0; i < n; i++) {
        if (s.find(arr[i] - 1) == s.end()) {
            int curr = arr[i];
            int count = 1;

            while (s.find(curr + 1) != s.end()) {
                curr++;
                count++;
            }
            maxLen = max(maxLen, count);
        }
    }
    return maxLen;
}

int main() {
    int arr[] = {100, 4, 200, 1, 3, 2};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Longest consecutive sequence length: " << longestConsecutive(arr, n);
    return 0;
}

