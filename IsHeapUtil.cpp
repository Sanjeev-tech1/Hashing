#include<bits/stdc++.h>
#include<vector>
using namespace std;

bool isHeapUtil(vector<int>&arr,int i,int n){
    if(i>=n/2)
    return true;
    int left=2*i+1;
    int right=2*i*2;

    if(arr[i]<arr[left])
    return false;

    if(right<n && arr[i]<arr[right])
    return false;

    return isHeapUtil(arr,left,n)&&(right>=n|| isHeapUtil(arr,right,n));
}

bool inMaxHeap(vector<int>&arr){
    return isHeapUtil(arr,0,arr.size());
}
  
int main () {
    vector<int>arr={90,15,10,7,12,2,7,3};
    inMaxHeap(arr)?cout<<"true":cout<<"false";

return 0;
}