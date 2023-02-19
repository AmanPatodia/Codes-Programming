#include<bits/stdc++.h>
using namespace std;


void Palindrome_Check(string s1 , int i)
{
    if(s1[i]!=s1[s1.length()-i-1] )
    {
        cout<<"Input String is not Palindrome "<<endl;
          return ;
    }  
    if(i==s1.length()/2) 
    {
          cout<<"Input String is Palindrome "<<endl;
          return ;
    }
    Palindrome_Check(s1,i+1);
}

int main()
{
    string s1="";
    cout<<"Enter string to check its palindrome or not : "<<endl;
    cin>>s1;
    cout<<s1.length();
    Palindrome_Check(s1,0);
    return 0;
} 