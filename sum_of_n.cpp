// Sum of n natural no-----Time compexcity O[n]
#include<iostream>
using namespace std;

int sumn(int n)
{
    if(n==0)
    return 0;
    else
    return sumn(n-1)+n;   //recursive call 1+2+3+....n-1+n = sum(n-1) + n
}

int main()
{
    int n;
    cin>>n;
    cout<<"Sum  "<<sumn(n);

    return 0;
}