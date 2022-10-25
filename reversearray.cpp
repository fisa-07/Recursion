#include<bits/stdc++.h>
using namespace std;
void reverse(vector<int> arr,int idx){
    if(idx==arr.size()){
        return;
    }
    reverse(arr,idx+1);
    cout<<arr[idx]<<" ";
}
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    reverse(v,0);
    
    return 0;
}
