#include<bits/stdc++.h>
using namespace std;
int loe(vector<int> v,int idx,int x){
    int lo = 
}
int main(){
    int l,e;
    cin>>l;
    cin>>e;
    vector<int> v;
    for(int i=0;i<l;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<loe(v,0,e);
    return 0;
}
