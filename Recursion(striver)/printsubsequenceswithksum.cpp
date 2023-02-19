#include<bits/stdc++.h>
using namespace std;

void printsubsequencesksum(int ind,int arr[],int s,vector<int>&ds,int sum,int n)
{
   if(ind == n)
   {
    if(s==sum)
    {
        for(auto it: ds)
       {
        cout<<it<<" ";
        }
    cout<<endl;
    }
    return ;
   }

   ds.push_back(arr[ind]);
   s+=arr[ind];
   printsubsequencesksum(ind+1,arr,s,ds,sum,n);
   
   s-=arr[ind];
   ds.pop_back();
   printsubsequencesksum(ind+1,arr,s,ds,sum,n);
}

int main()
{
    int arr[]={1,2,1};
    int sum=2;
    vector<int>ds;
    printsubsequencesksum(0,arr,0,ds,sum,3);
    return 0;
}