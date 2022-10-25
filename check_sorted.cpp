// Check array is sorted or not
#include<iostream>
using namespace std;

bool sorted(int arr[],int n)
{
    if(n==1)
    {
        return true;
    }
    bool restarray=sorted(arr+1,n-1);
    if(arr[0]<arr[1] && restarray)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int arr[]={1,2,9,4,9};
    cout<<sorted(arr,5);

    return 0;
}