#include<bits/stdc++.h>
using namespace std;

int main()
{
   int arr[]={2, 2, 2, 1, 1, 1, 0};
   int t=3;
   int n= sizeof(arr)/sizeof(arr[0]);
   map<int,int>mp;
   for(int i=0;i<n;i++)
   {
      mp[arr[i]]++;
   }
for(int i=0;i<t;i++)
{
    for(auto it = mp.begin();it!=mp.end();it++)
   {
      int  p =it->second;
      for(int j=0;j<p;j++)
      {
         cout<<it->first<<" ";
      }
      
   }
}
   
   return 0;
}