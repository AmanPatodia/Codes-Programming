#include<bits/stdc++.h>
using namespace std;
int sum=0;
void funandsum(int ind,int arr[],int n,vector<int>&ds)
{
    if(ind==n)
    {
        int x=1;
        if(ds.size()==1) sum+=ds[0];
        else{
            x= ds[0];
              for(int i=1;i<ds.size();i++)
            {
               cout<<ds[i]<<" ";
               x=x&ds[i];
            }
           cout<<"and of subset are : "<<x<<endl;
           sum+=x;
        }
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
    cout<<sum-n;
    return 0;
}