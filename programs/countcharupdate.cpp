#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "abccbbs";
    string s1= " ";
    int c=1;
    for(int i=0;i<s.length();i++)
    {
      if(s[i+1]==s[i])
      {
        c++;
      }
      else{
        s1= s1+ (s[i]+to_string(c));
        c=1;
      }
    }
    cout<<s1;
}