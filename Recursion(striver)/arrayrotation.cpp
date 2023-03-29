#include<bits/stdc++.h>
using namespace std;

void arrayrotation(vector<int>&a,int n,int k)
{
    while(k!=0)
    {
        int s=a[n-1];
        for(int i=n-1;i>0;i--)
        {
            a[i]=a[i-1];
        }
        a[0]=s;
        k--;
    }
}

void printqueryelements(vector<int>&query,int m,vector<int>&a,int n)
{
    for(int i=0;i<m;i++)
    {
        int x=query[i];
        cout<<a[x]<<endl;
    }
}

int main()
{
    vector<int>a;
    vector<int>query;
    int k,n,m,x;
    cout<<"Enter no of rotations:"<<endl;
    cin>>k;
    cout<<"Enter size of array:"<<endl;
    cin>>n;
    cout<<"Enter size of query array:"<<endl;
    cin>>m;
    cout<<"Enter  array elements :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        a.push_back(x);
    }
    cout<<"Enter querry array indices:"<<endl;
    for(int i=0;i<m;i++)
    {
        cin>>x;
        query.push_back(x);
    }
    arrayrotation(a,n,k);
    printqueryelements(query,m,a,n);
    return 0;
}