#include<iostream>
using namespace std;
int main()
{
    int n,*ptr;
    cout<<"Enter limit: ";
    cin>>n;
    int a[n];
    cout<<"Enter numbers\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ptr = &a[n-1];
    cout<<"Numbers in reverse order!!\n";
    for(int i=1;i<=n;i++)
    {
        cout<<*ptr<<"\n";
        ptr--;
    }
    return 0;
}