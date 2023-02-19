#include<bits/stdc++.h>
using namespace std;

void printsubsequence(int ind,int arr[],vector<int>&ds,int n)
{
   if(ind==n)
   {
      for(auto it:ds)
      {
        cout<<it<<" ";
      }
      cout<<endl;
      return ;
   }
   ds.push_back(arr[ind]);
   printsubsequence(ind+1,arr,ds,n);
   ds.pop_back();
   printsubsequence(ind+1,arr,ds,n);

}

int main()
{
    int arr[]={1,2,3,5,6};
    int n=5;
    vector<int>ds;
    printsubsequence(0,arr,ds,n);
    return 0;
}