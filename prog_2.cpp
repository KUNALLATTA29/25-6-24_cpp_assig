#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int> arr = {1,1,1,1,1,2,2,2,2,2,2,2,3,3,3,3,4,4,5,5,5,5,6,7};
    int index =1;
    int occ = 1;
    
    for(int i=1;i<arr.size();i++){
        if(arr[i]==arr[i-1]){
            occ++;
        }else{
            occ=1;
        }
        if(occ<=3){
            arr[index++]=arr[i];
        }
    }
    cout<<index<<endl;
    for(int it = 0;it<index;it++){
        cout<<arr[it]<<" ";
    }
    return 0;
}
