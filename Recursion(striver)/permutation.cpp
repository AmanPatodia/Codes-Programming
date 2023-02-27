#include<bits/stdc++.h>
using namespace std;

void createpermutation(int ind,vector<int>&nums,vector<vector<int>>&ans)
{
    if(ind==nums.size())
    {
        ans.push_back(nums);
        return ;
    }
    for(int i=ind;i<nums.size();i++)
    {
        swap(nums[ind],nums[i]);
        createpermutation(ind+1,nums,ans);
        swap(nums[ind],nums[i]);
    }
}

void printper(vector<int>v)
{
    for(auto it:v)
    {
        cout<<it<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int>nums={1,2,3};
    vector<vector<int>>ans;
    createpermutation(0,nums,ans);
    for(auto it = ans.begin();it!=ans.end();it++)
    {
        printper(*it);
    }
    return 0;
}