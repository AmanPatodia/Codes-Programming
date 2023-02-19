#include<bits/stdc++.h>
using namespace std;

string removespecial(string &s)
{
    string s1 ="";
   for(int i=0;i<s.length();i++)
   {
     if(s[i]>='a' && s[i]<='z')
     {
        s1+=s[i];
     }
   }  
   return s1;
}

void checkpalindrome(int i,string &s2)
{

    int x=s2.length();
    if(s2[i]!=s2[x-i-1])
    {
        cout<<"Its not Palindrome "<<endl;
        return ;
    }
    if(i==x/2)
    {
        cout<<"Its Palindrome"<<endl;
        return ;
    }
    checkpalindrome(i+1,s2);
}

int main()
{
    string s="a Man, na , M a";
    cout<<s<<endl;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    cout<<s<<endl;
    string s2=removespecial(s);
    cout<<s2<<endl;
    checkpalindrome(0,s2);
}