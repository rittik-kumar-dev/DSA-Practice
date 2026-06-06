/*
    Problem: Remove Duplicates from Sorted Array
    Platform: LeetCode
    Approach: STL unique() + erase()

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:

    int removeDuplicates(vector<int>& nums) {

        nums.erase(unique(nums.begin(), nums.end()), nums.end());

        return nums.size();
    }
};

int main() {

    Solution obj;

    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

    int k = obj.removeDuplicates(nums);

    cout << "Number of unique elements: "
         << k << endl;

    cout << "Array after removing duplicates: ";

    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }

    cout << endl;

    return 0;
}