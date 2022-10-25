// pow(2,n)-1 gives the no of steps required //
#include<iostream>
using namespace std;
void toh(int n,char t1,char t2,char t3){
    if(n==0){
        return;
    }
    toh(n-1,t1,t3,t2);
    cout<<"MOVE DISC "<<n<<" FROM TOWER "<<t1<<" TO "<<t2<<endl;
    toh(n-1,t3,t2,t1);
}
int main(){
    int n;
    cin>>n;
    toh(n,'A','B','C');
}