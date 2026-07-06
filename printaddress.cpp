#include<iostream>
using namespace std;
int main()
{
    int a,*ptr;
    cout<<"a = ";
    cin>>a;
    ptr = &a;
    cout<<"Its address: "<<ptr;
    return 0;
}