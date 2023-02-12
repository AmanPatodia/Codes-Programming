#include<bits/stdc++.h>
using namespace std;

int AppendandDelete(string &s1,string &s2)
{
   int i=0,k=0,j=s1.size()-1,l=s2.size()-1;
   int z=max(s1.size(),s2.size()),c=0;
   while(1)
   {
      if(s1[i]==s2[k])
      {
        i++;
        k++;
      }
      else{
        break;
      }
   }
  for(int s=j;s>=i;s--)
  {
      s1.pop_back();
      c++;
  }
  for(int a=k;a<=l;a++)
  {
    s1.push_back(s2[a]);
    c++;
  }
  return c;
}

int main()
{
   string s1 =" ",s2=" ";
   cout<<"Enter string 1 and  2 : "<<endl;
   cin>>s1>>s2;
   int q=AppendandDelete(s1,s2);
   cout<<"No of moves are : "<<q<<endl;
   return 0 ;
}