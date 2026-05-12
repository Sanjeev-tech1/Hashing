#include<bits/stdc++.h>
#include<vector>
using namespace std;


bool canPairs(vector<int>arr,int k){

    int n=arr.size();
    if(n%2==1)
    return false;
    int count=0;

    vector<int>vis(n,-1);

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((arr[i]+arr[j])%k==0 && vis[i]==-1 && vis[j]==-1){
                count++;
                vis[i]=1;
                vis[j]=1;
            }
        }
    }
    return(count==n/2);

}
  
int main () {
    vector<int> arr={92,75,65,48,45,35};

    int k=10;
    cout<<(canPairs(arr,k)?"true":"false");
  
return 0;
}