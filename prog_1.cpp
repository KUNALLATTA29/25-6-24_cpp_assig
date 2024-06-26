#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int> arr = {0,0,0,0,0};
    int flag = 0;
    int n = arr.size();
    
    for(int i=n-1;i>=0;i--){
        if(arr[i]>0){
            arr[i]--;
            flag=1;
            break;
        }else if(arr[i]==0){
            arr[i]=9;
        }
    }
    if(flag==0){
        arr.erase(arr.begin(),arr.end());
        for(int i=0; i<n;i++){
            arr.push_back(0);
        }
    }
    for(auto it: arr){
        cout<<it<<" ";
    }
    return 0;
}