#include<bits/stdc++.h>
using namespace std;


void reverse (string &s1, int i,int n)
{
       if(i>=n/2) 
          return ;
       swap(s1[i],s1[n-i-1]);
       reverse(s1,i+1,n);
}

int main()
{
   string s1="";
   cout<<"Enter a string to be reversed :"<<endl;
   cin>>s1;
   reverse(s1,0,s1.length());
   cout<<s1<<endl;
   return 0;
}