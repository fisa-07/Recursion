#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> arr,int idx){
    if(idx==arr.size()){
        return;
    }
    cout<<arr[idx]<<" ";
    display(arr,idx+1);
}
int main(){
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    display(v,0);
    return 0;
}