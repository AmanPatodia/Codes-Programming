#include<bits/stdc++.h>
using namespace std;

void TWMSort(int A1[],int A2[],int m,int n,int c[])
{
    int i=0,j=0,k=0;
    while(i<m && j<n)
    {
        if(A1[i]<A2[j])
            c[k++]=A1[i++];
        else
            c[k++]=A2[j++];
    }
    for( ; i<m; i++)
      c[k++]=A1[i];
    for( ; j<n; j++)
      c[k++]=A2[j];
}

int main()
{
    int A1[]={2,4,6,8,12,15,17,19};
    int A2[]={3,5,7,9,10,20};
    int m=sizeof(A1)/sizeof(A1[0]);
    int n=sizeof(A2)/sizeof(A2[0]);
    int x=m+n;
    int c[x]={0};
    TWMSort(A1,A2,m,n,c);
    for(int i=0;i<x;i++)
    {
        cout<<c[i]<<" ";
    }
}
