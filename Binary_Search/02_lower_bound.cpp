#include <bits/stdc++.h>
using namespace std;
int lbound(vector<int> &arr,int target){
    int l=0,h=arr.size()-1;
    int ans=arr.size();
    while(l<=h){
        int mid = (l+h)/2;
        if(arr[mid]>=target){
            ans=mid;
            h=mid-1;
        }
        else{l=mid+1;}
    }
    return ans;
}
int main(){
  vector<int> arr={2,3,5,6,8,10};
  int target=7;
  cout<<lbound(arr,target);
return 0;
}