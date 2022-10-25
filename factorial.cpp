// Factorial----Time complexcity O[n4]
#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n==0)
    return 1;
    else
    return factorial(n-1)*n;  // recursive call n*n-1*......3*2*1 = factorial(n-1)*n
}

int main()
{
    int n;
    cin>>n;
    cout<<"Factorial  "<<factorial(n);

    return 0;
}