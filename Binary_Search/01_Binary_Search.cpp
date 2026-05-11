// Problem: Binary Search
// Platform: LeetCode
// Approach: Iterative Binary Search
// Time Complexity: O(log n)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& nums, int target) {
    int low = 0;
    int high = nums.size() - 1;

    while (low <= high) {

        // Prevents overflow
        int mid = low + (high - low) / 2;

        if (nums[mid] == target) {
            return mid;
        }

        else if (nums[mid] < target) {
            low = mid + 1;
        }

        else {
            high = mid - 1;
        }
    }

    return -1;
}

int main() {

    vector<int> nums = {-1, 0, 3, 5, 9, 12};
    int target = 9;

    int result = binarySearch(nums, target);

    if (result != -1) {
        cout << "Target found at index: " << result << endl;
    }

    else {
        cout << "Target not found" << endl;
    }

    return 0;
}
