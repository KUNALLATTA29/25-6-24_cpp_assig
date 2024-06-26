#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int> arr = {4,5,6,9,3,1,2,2,2,2,3,3,3,3,4,4,4,4,4,5,5,5,5,6,6,6,6,6,7,7,7,7};
    int index =0;
    int c1,c2,c3,c4;
    
    for(auto it:arr){
        if(it==1){
            c1++;
        }else if(it==2){
            c2++;
        }else if(it==3){
            c3++;
        }else if(it==4){
            c4++;
        }
    }
    
    for(int i=0;i<arr.size();i++){
        if(arr[i]!=1 && arr[i]!=2 && arr[i]!=3 && arr[i]!=4){
            arr[index++]=arr[i];
        }
    }
    int total = index+c1;
    for(int i=index; i<index+c1;i++){
        arr[i]=1;
    }
    for(int i=total;i<total+c2;i++){
        arr[i]=2;
    }
    for(int i=total+c2;i<total+c2+c3;i++){
        arr[i]=3;
    }
    for(int i=total+c2+c3;i<arr.size();i++){
        arr[i]=4;
    }
    for(auto it:arr){
        cout<<it<<" ";
    }
    return 0;
}