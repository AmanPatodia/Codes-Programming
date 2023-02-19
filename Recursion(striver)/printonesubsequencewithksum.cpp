#include<bits/stdc++.h>
using namespace std;
//if we want to print any one subsequence from the array .
bool printsubsequencesksum(int ind,int arr[],int s,vector<int>&ds,int sum,int n)
{
   if(ind == n)
   {//condition satisified return true always otherwise return false
    if(s==sum)
    {
        for(auto it: ds)
       {
        cout<<it<<" ";
        }
       return true;
    }
    return false ;
   }

   ds.push_back(arr[ind]);
   s+=arr[ind];
   if(printsubsequencesksum(ind+1,arr,s,ds,sum,n)==true) return true;
   
   s-=arr[ind];
   ds.pop_back();
   if(printsubsequencesksum(ind+1,arr,s,ds,sum,n)==true) return true;

   return false;
}

int main()
{
    int arr[]={1,2,1};
    int sum=2;
    vector<int>ds;
    printsubsequencesksum(0,arr,0,ds,sum,3);
    return 0;
}