/*
    Problem: Move Zeroes
    Platform: LeetCode
    Approach: Extra Array

    Time Complexity: O(n)
    Space Complexity: O(n)
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:

    vector<int> moveZeroes(vector<int> &nums)
    {
        vector<int> ans;

        // Store all non-zero elements
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != 0)
            {
                ans.push_back(nums[i]);
            }
        }

        // Count and append zeroes
        int count = nums.size() - ans.size();

        for (int i = 0; i < count; i++)
        {
            ans.push_back(0);
        }

        // Copy back to original array
        for (int i = 0; i < nums.size(); i++)
        {
            nums[i] = ans[i];
        }

        return nums;
    }
};

int main()
{
    Solution obj;

    vector<int> nums = {0, 1, 0, 3, 12};

    vector<int> result = obj.moveZeroes(nums);

    cout << "Array after moving zeroes: ";

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    cout << endl;

    return 0;
}