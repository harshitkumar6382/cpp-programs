#include<iostream>
using namespace std;
int main()
{
    int n,*ptr;
    cout<<"Enter limit: ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ptr = a;
    cout<<"Traverse!!\n";
    for(int i=0;i<n;i++)
    {
        cout<<*ptr<<"\n";
        ptr++;
    }
    return 0;
}