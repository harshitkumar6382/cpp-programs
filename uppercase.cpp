#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);
    for(int i=0;i<s.size();i++)
    {
        s[i] = toupper(s[i]);
    }
    cout<<"String in capital letters = "<<s;
    return 0;
}