#include<bits/stdc++.h>
using namespace std;

void combinationsum(int ind,int arr[],int target,vector<int>&ds,int n,vector<vector<int>>&a)
{
    
     if(ind == n)
     {
        if(target == 0)
        {
            a.push_back(ds);
        }
        return ;
     }
     if(arr[ind]<=target)
     {
        ds.push_back(arr[ind]);
        combinationsum(ind,arr,target-arr[ind],ds,n,a);
        ds.pop_back();
     }
     combinationsum(ind+1,arr,target,ds,n,a);
     
}

int main()
{
    vector<vector<int>> ans;
    vector <int> ds;
    int arr[]={2,3,6,7};
    int n = 4;
    int target = 7; 
    combinationsum(0,arr,target,ds,n,ans);
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