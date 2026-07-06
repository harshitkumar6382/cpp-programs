#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1,s2;
    cout<<"Enter a string: ";
    getline(cin,s1);
    s2.resize(s1.size());
    for(int i=0;i<s1.size();i++)
    {
        s2[i] = s1[s1.size()-i-1];
    }
    if(s1==s2)
    {
        cout<<s1<<" are palindrome word.";
    }
    else
    {
        cout<<s1<<" are not palindrome word."; 
    }
    return 0;
}