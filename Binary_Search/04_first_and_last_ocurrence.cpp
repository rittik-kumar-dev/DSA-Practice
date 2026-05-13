#include <bits/stdc++.h>
using namespace std;


int findLast(vector<int> arr, int x) {
    int n = arr.size();


    int left = 0, right = n - 1;

    
    int last = -1;

    
    while(left <= right) {

   
        int mid = (left + right) / 2;

     
        if (x == arr[mid]) {
            last = mid;
            left = mid + 1;
        }

  
        else if (x < arr[mid])
            right = mid - 1;

        else
            left = mid + 1;
    }

    return last;
}


int findFirst(vector<int> arr, int x) {
    int n = arr.size();

    int left = 0, right = n - 1;

    int first = -1;

    while(left <= right) {

        int mid = (left + right) / 2;

       
        if (x == arr[mid]) {
            first = mid;
            right = mid - 1;
        }

       
        else if (x < arr[mid])
            right = mid - 1;

        else
            left = mid + 1;
    }

    return first;
}

vector<int> find(vector<int> arr, int x) {
    int n = arr.size();

    // Find first and last index
    int first = findFirst(arr, x);
    int last = findLast(arr, x);

    vector<int> res = {first, last};
    return res;
}

int main() {
    vector<int> arr = {1, 3, 5, 5, 5, 5, 7, 123, 125};
    int x = 5;
    vector<int> res = find(arr, x);
    cout << res[0] << " " << res[1];
    return 0;
}