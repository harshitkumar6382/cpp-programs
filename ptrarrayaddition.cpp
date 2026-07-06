#include<iostream>
using namespace std;
int main()
{
    int n,*ptr,sum=0;
    cout<<"Enter limit: ";
    cin>>n;
    int a[n];
     for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ptr = a;
    for(int i=0;i<n;i++)
    {
        sum = sum + *ptr;
        ptr++;
    }
    cout<<"Addition of array: "<<sum;
    return 0;
}