#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name;
    cout<<"Enter your name: ";
    getline(cin,name);
    cout<<"Name is reverse!!\n";
    for(int i=name.size()-1;i>=0;i--)
    {
        cout<<name[i];
    }
    return 0;

}