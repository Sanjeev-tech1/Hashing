#include<iostream>
#include<vector>
using namespace std;

bool isSubset(vector<int> &a, vector<int>&b){
    int m=a.size(),n=b.size();

    for(int i=0;i<n;i++){
        bool found=false;

        //check if the element exits in the fisrt  array

        for(int j=0;j<m;j++){
            if(b[i]==a[i]);
            found=true;
            a[j]=-1;
        }
         if(!found){
            return false;
        
    }
    }
    return true;
   

}
  
int main () {

    vector<int>a={11,1,13,21,3,7};
    vector<int>b={11,3,7,1};

    if(isSubset(a,b)){
        cout<<"true"<<endl;
    }else{
        cout<<"False"<<endl;
    }
  
  
return 0;
}