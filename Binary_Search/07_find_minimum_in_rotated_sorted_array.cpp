/*
    Problem: Find Minimum in Rotated Sorted Array
    Platform: LeetCode
    Approach: Binary Search

    Time Complexity: O(log n)
    Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int findMinimum(const vector<int>& nums) {

    if (nums.empty()) {
        return -1;
    }

    int left = 0;
    int right = nums.size() - 1;

    int minimum = INT_MAX;

    while (left <= right) {

        // Prevent overflow
        int mid = left + (right - left) / 2;

        // Left half is sorted
        if (nums[left] <= nums[mid]) {

            minimum = min(minimum, nums[left]);
            left = mid + 1;
        }

        else {

            minimum = min(minimum, nums[mid]);
            right = mid - 1;
        }
    }

    return minimum;
}

int main() {

    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};

    int result = findMinimum(nums);

    cout << "Minimum element: "
         << result << endl;

    return 0;
}