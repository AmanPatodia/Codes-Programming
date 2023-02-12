#include<bits/stdc++.h>
using namespace std;

void SequenceEquatiion(vector<int>v1,int n)
{
  vector<int>x;
  vector<int>x1;
  for(int i=1;i<6;i++)
  {
    for(int j=0;j<5;j++)
    {
        if(v1[j]==i){
            x.push_back(j+1);
            break;
        }
    }
  }
  for(int i=0;i<5;i++)
  {
    for(int j=0;j<5;j++)
    {
        if(v1[j]==x[i]){
            x1.push_back(j+1);
            break;
        }
    }
  }
  for(auto it:x1)
  {
    cout<<it<<" ";
  }
}

int main()
{
   vector<int>v={5,2,1,3,4};
   SequenceEquatiion(v,v.size());

}