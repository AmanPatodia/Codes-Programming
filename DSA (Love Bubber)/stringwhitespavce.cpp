#include<bits/stdc++.h>
using namespace std;

string Replacewhitespace(string s1,int n)
{
    string temp="";
    for(int i=0;i<n;i++)
    {
       if(s1[i]==' ')
        temp+="@40";
       else
         temp+=s1[i];
    }
    return temp;
}


int main()
{
    string s="Hello My Self Is Aman";

    string s2=Replacewhitespace(s,s.size());
   cout<<"Input String are: "<<s<<" "<<endl;
   cout<<"Output string are: "<<s2<<" "<<endl;
   return 0;

}