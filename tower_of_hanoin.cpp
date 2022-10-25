// Tower of hanoin
#include<iostream>
using namespace std;

void toh(int n, char t1, char t2, char t3)
{
    if (n>0)
    {
        toh(n-1,'a','c','b');
        cout<<"From "<<t1<<" to "<<t3<<endl;;
        toh(n-1,'b','a','c');
    }
    
}

int main()
{
    int n;
    cout<<"Enter Hight of Tower ";
    cin>>n;
    toh(n,1,2,3);

    return 0;
}