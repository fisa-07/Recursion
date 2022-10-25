#include<bits/stdc++.h>
using namespace std;
int fon(vector<int> arr,int idx,int n){
    if(arr.size()==idx){
        return -1;
    }
    if(arr[idx]==n){
        return idx;
    }
    else{
        return fon(arr,idx+1,n);
    }
}
int main(){
    int n;
    int m;
    vector<int> v;
    cin>>n;
    for(int i = 0;i < n;i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    cin>>m;
    cout<<"Index "<<fon(v,0,m);
    return 0;

}