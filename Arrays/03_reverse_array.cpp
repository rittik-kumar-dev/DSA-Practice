// Problem: Reverse Array
// Platform: LeetCode
// Approach: Two pointers

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};

    int l = 0, r = arr.size() - 1;
    while (l < r) {
        swap(arr[l], arr[r]);
        l++;
        r--;
    }

    for (int x : arr) cout << x << " ";
}
