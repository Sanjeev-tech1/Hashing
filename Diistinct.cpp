#include<bits/stdc++.h>
#include<vector>
using namespace std;

vector<int>removeDuplicated(vector<int>&arr){
    vector<int>res;
    for(int i=0;i<arr.size();i++){
        int j;
        for(j=0;j<i;j++){
            if(arr[i]==arr[j])
            break;
        }
        if(i==j)
        res.push_back(arr[i]);
    }
    return res;
}
  
int main () {
    vector<int>arr={1,2,3,1,4,2};
    vector<int>res=removeDuplicated(arr);

    for(int ele:res)
    cout<<ele<<" ";
    
  
return 0;
}