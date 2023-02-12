#include<bits/stdc++.h>
using namespace std;

void Merge(int arr[],int l,int mid,int h)
{
    int n1=mid-l+1;
    int n2=h-mid;

    int a1[n1],a2[n2];

    for(int i=0;i<n1;i++)
       a1[i]=arr[l+i];
    for(int i=0;i<n2;i++)
       a2[i]=arr[mid+1+i];   

    int i=0,j=0,k=l;
    while(i<n1 && j<n2)
    {
        if(a1[i]<a2[j])
            arr[k++]=a1[i++];
        else
            arr[k++]=a2[j++];
    }
    for( ;i<n1;i++)
       arr[k++]=a1[i];
    for( ;j<n2;j++)
       arr[k++]=a2[j];
}

void MergeSort(int arr[],int l,int h)
{
    if(l<h)
    {
        int mid=(l+h)/2;
        MergeSort(arr,l,mid);
        MergeSort(arr,mid+1,h);
        Merge(arr,l,mid,h);
    }
}

int main()
{
    int Ar[]={2,5,1,3,15,42,86,19,32,12,10,36,6,4,8,9,7};
    int n=sizeof(Ar)/sizeof(Ar[0]);
    int l=0,h=n;
    MergeSort(Ar,l,h-1);
    for(int i=0;i<n;i++)
      cout<<Ar[i]<<" ";
    return 0;
}