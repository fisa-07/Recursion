#include<bits/stdc++.h>
using namespace std;
int maxele(vector<int> arr, int idx){
    if(idx==arr.size()){
        return 0;
    }
    int m = max(arr[idx],maxele(arr,idx+1));
    return m;
}
int main(){
    int n;
    vector<int> v;
    cin>>n;
    for(int i = 0;i < n;i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << maxele(v,0);
    return 0;
}