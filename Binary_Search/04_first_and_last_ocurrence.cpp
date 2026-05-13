#include <bits/stdc++.h>
using namespace std;
 vector<int> searchRange(vector<int>& arr, int target){
int n=arr.size();
int first=-1,last=-1;

for(int i=0;i<n;i++){
    if(arr[i]!=target){continue;}
if(first==-1){first=i;}
last=i;

}
return {first,last};
 }
int main(){
vector<int> arr={1,3,3,5,5,5,5,5,6};
int n=arr.size();
int target=5;
vector<int> ans=searchRange(arr,target);
cout<<ans[0]<<" "<<ans[1];
return 0;
}