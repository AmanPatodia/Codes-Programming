#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector <string> ss={"i","like","sam","sung","samsung","mobile","ice","cream","icecream","man","go","mango"};
    string s = "ilike";
    int i=0,j=0;
    string s2=" ";
    while(i!=ss.size() && j!=s.size())
    {
         if(s[j]==ss[i])
         {
             j++;
             i=0;
         }
         else{
            i++;
            s2+=s[j];
            j++;
         }
    }
}