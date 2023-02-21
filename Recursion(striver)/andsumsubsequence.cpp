#include<bits/stdc++.h>
using namespace std;
int sum=0;
void funandsum(int ind,int arr[],int n,vector<int>&ds)
{
    if(ind==n)
    {
        int x=1;
       for(int i=0;i<ds.size();i++)
       {
        x=x&ds[i];
       }
        sum+=x;
        return ;
    }
    ds.push_back(arr[ind]);
    funandsum(ind+1,arr,n,ds);
    ds.pop_back();
    funandsum(ind+1,arr,n,ds);
       
}

int main()
{
    int arr[]={1,2,3};
    int n =3;
    vector<int>ds;
    funandsum(0,arr,n,ds);
    cout<<sum;
    return 0;
}