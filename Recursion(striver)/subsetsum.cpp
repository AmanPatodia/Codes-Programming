#include<bits/stdc++.h>
using namespace std;

int sum=0;
void sumsubset(int i,int arr[],vector<int>&ds,int s,int n)
{

    if(i==3)
    {
      ds.push_back(s);
        return ;
    }
    sumsubset(i+1,arr,ds,s+arr[i],n);
    sumsubset(i+1,arr,ds,s,n);
}

int main()
{
    int arr[]={1,2,3};
    int n = 3;
    vector<int>ds;
    sumsubset(0,arr,ds,0,n);
    sort(ds.begin(),ds.end());
    for(auto it : ds)
    {
        cout<<it<<" ";
    }
    return 0;
}