#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool checkEqual(vector<int> &a, vector<int> &b){

    int n=a.size(),m=b.size();

    if(n!=m)
    return false;

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    for(int i=0;i<n;i++)
    if(a[i]!=b[i])
    return false;

    return true;
}
  
int main () {
    vector<int>a={3,5,2,5,2};
    vector<int>b={2,3,5,5,2};

    if(checkEqual(a,b))
    cout<<"true";
    else
    cout<<"false";

  
  
return 0;
}