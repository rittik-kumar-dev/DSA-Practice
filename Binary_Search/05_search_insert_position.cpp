#include <bits/stdc++.h>
using namespace std;
    int searchInsert(vector<int>& arr, int target) {
        
        int l=0,h=arr.size()-1;
 
        while(l<=h){
            int mid = (l+h)/2;
            if(arr[mid]==target){return mid;}
            
            else if(arr[mid]<target){l=mid+1;}
            else{h=mid-1;}
        }
        return l;
       
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
   cout<< searchInsert(arr,target);

return 0;
}