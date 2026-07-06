#include<iostream>
using namespace std;
int main()
{
   int n,*ptr;
   cout<<"Enter limit: ";
   cin>>n;
   int a[n],max;
   for(int i=0;i<n;i++)
   {
    cin>>a[i];
   }
   ptr = a;
   max = a[0];
   for(int i=1;i<=n;i++)
   {
    if(max<*ptr)
    {
        int temp;
        temp = max;
        max = *ptr;
        *ptr = temp;
        ptr++;
    }
    else
    {
        ptr++;
    }
   }
   cout<<"Largest element = "<<max;
   return 0;
}