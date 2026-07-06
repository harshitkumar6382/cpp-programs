#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name;
    int count=0;
    cout<<"Enter your name: ";
    getline(cin,name);
    for(char ch : name)
    {
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        {
            count++;
        }
    }
    cout<<"There are "<<count<<" vowels in given name.";
    return 0;

}