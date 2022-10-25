/* Power in optimized way-----Time complexcity 
IN THIS PROGRAM SUPPOSE WE HAVE TO CALCULATE POWER OF 2 TO THE POWER 8 THEN WE CAN THINK THAT
IN THIS FORM (2*2)^4 SIMILERLY FOR ODD VALUE OF POWER SUPPOSE 2 TO THE POIWER 7 THEN WE CAN THINK 
IN THIS WAY THAT 2*(2*2)^3 
*/
#include<iostream>
using namespace std;

int power(int m, int n)
{
    if(n==0)
    return 1;
    if(n%2==0)
    return power(m*m,n/2);  // 2^8=(2*2)^4
    else
    return m*(power(m*m,n/2));  //2^7=2*(2*2)^3
}

int main()
{
    int m,n;
    cin>>m>>n;
    cout<<m<<" to power "<<n<<" is equal to  "<<power(m,n);

    return 0;
}