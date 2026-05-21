/*
    Problem: Find Peak Element
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
    int findPeakElement(vector<int>& arr) {
        int low = 0, high = arr.size() - 1;
        int ans;

        int n = arr.size() - 1;

        if (arr.size() == 1) {
            return 0;
        }

        if (arr[0] > arr[1]) {
            return 0;
        }

        if (arr[n] > arr[n - 1]) {
            return n;
        }

        low = 1, high = n - 1;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) {
                ans = mid;
                break;
            }

            else if (arr[mid] > arr[mid - 1]) {
                low = mid + 1;
            }

            else {
                high = mid - 1;
            }
        }

        return ans;
    }
};

int main() {

    Solution obj;

    vector<int> arr = {1, 2, 3, 1};

    int peakIndex = obj.findPeakElement(arr);

    cout << "Peak element index: "
         << peakIndex << endl;

    return 0;
}