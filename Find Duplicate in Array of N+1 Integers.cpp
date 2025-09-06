#include <iostream>
using namespace std;

int findDuplicate(int nums[], int n) {
    int slow = nums[0];
    int fast = nums[0];

    // Phase 1: Detect intersection point
    do {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while(slow != fast);

    // Phase 2: Find entrance to cycle (duplicate)
    slow = nums[0];
    while(slow != fast) {
        slow = nums[slow];
        fast = nums[fast];
    }

    return slow;
}

int main() {
    int n;
    cout << "Enter value of n (array size will be n+1): ";
    cin >> n;

    int nums[n + 1];
    cout << "Enter " << n + 1 << " array elements (values from 1 to " << n << "): ";
    for(int i = 0; i <= n; i++) {
        cin >> nums[i];
    }

    int duplicate = findDuplicate(nums, n + 1);
    cout << "Duplicate number is: " << duplicate << endl;

    return 0;
}

