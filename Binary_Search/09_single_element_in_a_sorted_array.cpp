/*
    Problem: Single Element in a Sorted Array
    Platform: LeetCode
    Approach: Binary Search

    Time Complexity: O(log n)
    Space Complexity: O(1)
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:

    int singleNonDuplicate(vector<int>& arr) {

        int n = arr.size() - 1;
        int l = 0, h = n - 1;

        // Edge case: only one element
        if (arr.size() == 1) {
            return arr[0];
        }

        // Check first element
        if (arr[0] != arr[1]) {
            return arr[0];
        }

        // Check last element
        if (arr[n] != arr[n - 1]) {
            return arr[n];
        }

        l = 1;
        h = n - 2;

        while (l <= h) {

            // Prevent overflow
            int mid = l + (h - l) / 2;

            // Single element found
            if (arr[mid] != arr[mid - 1] &&
                arr[mid] != arr[mid + 1]) {

                return arr[mid];
            }

            // Move to right half
            else if ((mid % 2 != 0 && arr[mid] == arr[mid - 1]) ||
                     (mid % 2 == 0 && arr[mid] == arr[mid + 1])) {

                l = mid + 1;
            }

            // Move to left half
            else {
                h = mid - 1;
            }
        }

        return -1;
    }
};

int main() {

    Solution obj;

    vector<int> arr = {1, 1, 2, 3, 3, 4, 4, 8, 8};

    int result = obj.singleNonDuplicate(arr);

    cout << "Single non-duplicate element: "
         << result << endl;

    return 0;
}