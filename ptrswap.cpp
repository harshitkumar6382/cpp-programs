#include<iostream>
using namespace std;
int main()
{
    int a,b,*p,*q,temp;
    cout<<"a = ";
    cin>>a;
    p = &a;
    cout<<"\nb = ";
    cin>>b;
    q = &b;
    temp = *p;
    *p=*q;
    *q=temp;
    cout<<"\na = "<<a;
    cout<<"\nb = "<<b;
    return 0;
}