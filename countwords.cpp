#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name;
    cout<<"Enter your name: ";
    getline(cin,name);
    cout<<"There are "<<name.length()<<" words in given name.";
    return 0;

}