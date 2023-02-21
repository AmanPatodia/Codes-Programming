#include<bits/stdc++.h>
using namespace std;

void combinationsum2(int ind,int target,int arr[],int n,vector<int>&ds,vector<vector<int>>&ans)
{
    if(target == 0)
    {
        ans.push_back(ds);
        return ;
    }
    for(int i =ind;i<n;i++)
    {
       if(i>ind && arr[i]==arr[i-1]) continue;
       if(arr[i]>target) break;
       ds.push_back(arr[i]);
       combinationsum2(i+1,target-arr[i],arr,n,ds,ans);
       ds.pop_back();
    }
}

int main()
{
    vector<vector<int>>ans;
    vector<int>ds;
    int arr[]={1,1,1,2,2};
    int target = 4;
    int n=5;
    combinationsum2(0,target,arr,n,ds,ans);
    for(int i=0;i<ans.size();i++)
    {
        for(auto it = ans[i].begin();it!=ans[i].end();it++)
        {
            cout<<*it<<" ";
        }
        cout<<endl;
    }
    return 0;
}