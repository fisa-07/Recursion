#include<iostream>
using namespace std;
int poi(int n,int p){
    if(p==0){
        return 1;
    }
    int ntpxb2 = poi(n,p/2);
    int ntpx;
    if(p%2!=0){
        ntpx = ntpxb2*ntpxb2*n;
    }
    else{
        ntpx = ntpxb2*ntpxb2;
    }
    return ntpx;
}
int main(){
    int n,p;
    cin>>n>>p;
    cout<<poi(n,p);
    return 0;

}