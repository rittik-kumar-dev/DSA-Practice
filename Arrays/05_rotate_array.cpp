/*
    Problem: Rotate Array
    Platform: LeetCode
    Approach: Reversal Algorithm

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:

    vector<int> rotate(vector<int>& nums, int k) {

        k = k % (nums.size());

        // Reverse the entire array
        reverse(nums.begin(), nums.end());

        // Reverse first k elements
        reverse(nums.begin(), nums.begin() + k);

        // Reverse remaining elements
        reverse(nums.begin() + k, nums.end());

        return nums;
    }
};

int main() {

    Solution obj;

    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    vector<int> result = obj.rotate(nums, k);

    cout << "Array after rotation: ";

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    cout << endl;

    return 0;
}