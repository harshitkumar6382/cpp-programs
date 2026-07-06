#include<iostream>
using namespace std;
int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    return n+sum(n-1);
}
int main()
{
    int a;
    cout<<"Sum of natural numbers.\nEnter where you want to get = ";
    cin>>a;
    cout<<"Sum = "<<sum(a);
    return 0;
}