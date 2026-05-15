#include <bits/stdc++.h>
using namespace std;
int search(vector<int>& arr, int target) {
    int l = 0, h = arr.size() - 1;

    while (l <= h) {
        int mid = l + (h - l) / 2;

        if (arr[mid] == target) return mid;

        // left half sorted
        if (arr[l] <= arr[mid]) {
            if (arr[l] <= target && target < arr[mid])
                h = mid - 1;
            else
                l = mid + 1;
        }
        // right half sorted
        else {
            if (arr[mid] < target && target <= arr[h])
                l = mid + 1;
            else
                h = mid - 1;
        }
    }
    return -1;
}
int main(){
 int n;
    cin>>n;
    vector<int> arr(n);
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
   cout<< search(arr,target);
return 0;
}