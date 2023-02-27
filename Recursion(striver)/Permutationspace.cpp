#include<bits/stdc++.h>
using namespace std;

void createpermutation(vector<int>&ds,vector<int>&arr,vector<vector<int>>&ans,int freq[])
{
     if(ds.size()==arr.size())
     {
        ans.push_back(ds);
        return ;
     }
     for(int i=0;i<arr.size();i++)
     {
        if(!freq[i])
        {
            ds.push_back(arr[i]);
            freq[i]=1;
            createpermutation(ds,arr,ans,freq);
            freq[i]=0;
            ds.pop_back();
        }
     }
}
void printans(vector<int>v)
{
    for(auto it:v)
    {
        cout<<it<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int>arr={1,2,3};
    vector<int>ds;
    vector<vector<int>>ans;
    int freq[arr.size()]={0};
    createpermutation(ds,arr,ans,freq);
    for(auto it = ans.begin();it!=ans.end();it++)
    {
        printans(*it);
    }
    return 0;
}