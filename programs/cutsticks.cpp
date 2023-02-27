#include<bits/stdc++.h>
using namespace std;

void printstick(vector<int>&v,vector<int>&arr,int n)
{
    int smal = arr[0];
    v.push_back(arr.size());
    for(int i=0;i<n;i++)
    {
        int ele = arr[i]-smal;
        if(ele > 0)
        {
            v.push_back(arr.size()-i);
            smal+=ele;
        }

    }
}

int main()
{
    vector<int>arr={5 ,4, 4, 2, 2, 8 };
    sort(arr.begin(),arr.end());
    vector<int>v;
    printstick(v,arr,arr.size());
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}