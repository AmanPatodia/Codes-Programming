#include<bits/stdc++.h>
using namespace std;

void printcomb(int ind,int arr[],vector<int>&v,int n,int target)
{
        if(target==0)
        {
            for(int j=0;j<v.size();j++)
            {
                cout<<v[j]<<" ";
            }
             cout<<endl;
             return ;
        }
        
    for(int i=ind;i<n;i++)
    {
        if(i>ind && arr[i]==arr[i-1]) continue;
        if(arr[i]>target) break;
        v.push_back(arr[i]);
        printcomb(i+1,arr,v,n,target-arr[i]);
        v.pop_back();
    }
}

int main()
{
    int arr[]={1,1,1,2,2};
    int target=4;
    vector<int>v;
    printcomb(0,arr,v,5,target);
    return 0;
}