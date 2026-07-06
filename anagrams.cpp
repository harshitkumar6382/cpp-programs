#include<iostream>
#include<string>
using namespace std;
void sort(string &s)
{
    for(int i=0;i<s.size();i++)
    {
        for(int j=i;j<s.size();j++)
        {
              if( s[i] >  s[j])
              {
                char temp;
                temp = s[i];
                s[i] = s[j];
                s[j] =  temp;                
              }
        }
    }
}
int main()
{    
    string s1,s2;
    cout<<"s1 = ";
    getline(cin,s1);
    cout<<"s2 = ";
    getline(cin,s2);
    sort(s1);
    sort(s2);
    if(s1.size()==s2.size())
    {
        if(s1==s2)
        {
          cout<<"s1 and s2 are anagrams.";  
        }
        else
        {
            cout<<"s1 and s2 are not anagrams.";
        }
    }
    else
    {
        cout<<"s1 and s2 are not anagrams.";
    }
    return 0;
    

}