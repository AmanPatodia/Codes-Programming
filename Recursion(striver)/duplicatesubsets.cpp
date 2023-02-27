#include<bits/stdc++.h>
using namespace std;

set<vector<int>>ds1;
void sumsubset(int i,int arr[],vector<int>&ds,int n)
{

    if(i==n)
    {
        ds1.insert(ds);
        return ;
    }
    ds.push_back(arr[i]);
    sumsubset(i+1,arr,ds,n);
    ds.pop_back();
    sumsubset(i+1,arr,ds,n);
}

void printv(vector<int>v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[]={1,2,2};
    int n = 3;
    vector<int>ds;
    sumsubset(0,arr,ds,n);
    for(auto i=ds1.begin();i!=ds1.end();i++)
    {
        printv(*i);
    }
    return 0;
}