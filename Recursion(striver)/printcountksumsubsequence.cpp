#include<bits/stdc++.h>
using namespace std;
//if we want to print any one subsequence from the array .
int printsubsequencesksum(int ind,int arr[],int s,int sum,int n)
{
   if(ind == n)
   {//condition satisified return true always otherwise return false
    if(s==sum)
    {
       return 1;
    }
    return 0 ;
   }

   s+=arr[ind];
   int l= printsubsequencesksum(ind+1,arr,s,sum,n);
   
   s-=arr[ind];
   int r = printsubsequencesksum(ind+1,arr,s,sum,n);

   return l+r;
}

int main()
{
    int arr[]={1,2,1};
    int sum=2;
    cout<<printsubsequencesksum(0,arr,0,sum,3);
    return 0;
}