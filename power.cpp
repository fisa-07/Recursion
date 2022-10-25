// Power-----Time complexcity O[n]
#include<iostream>
using namespace std;

int power(int m, int n)
{
    if(n==0)
    return 1;
    else
    return power(m,n-1)*m;  // recursive call 5*5*5*.....n = power(5,n-1)*n
}

int main()
{
    int m,n;
    cin>>m>>n;
    cout<<m<<" to power "<<n<<" is equal to  "<<power(m,n);

    return 0;
}