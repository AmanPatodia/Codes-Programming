#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>ds1;
void sumsubset(int i,int arr[],vector<int>&ds,int n)
{
    ds1.push_back(ds);
    for(int ind=i;ind<n;ind++)
    {
        if(ind!=i && arr[ind]==arr[ind-1]) continue;
        ds.push_back(arr[ind]);
        sumsubset(ind+1,arr,ds,n);
        ds.pop_back();
    }
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
    for(auto it = ds1.begin();it != ds1.end();it++)
    {
        printv(*it);
    }
    return 0;
}