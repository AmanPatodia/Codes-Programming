#include<bits/stdc++.h>
using namespace std;

void Swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int partation(int arr[],int l,int h)
{
    int i=l,j=h;
    int pivot = arr[l];
    while(i<j)
    {
        do{
            i++;
        }while(arr[i]<=pivot);
        do
        {
            j--;
        } while (arr[j]>pivot);
        Swap(&arr[i],&arr[j]);
    }
    Swap(&arr[j],&arr[l]);
    return j;
}

void QuickSort(int arr[],int l,int h)
{
    int j=0;
    if(l<h)
    {
        j=partation(arr,l,h);
        QuickSort(arr,l,j);
        QuickSort(arr,j+1,h);
    }
}

int main()
{
    int Ar[]={2,5,1,3,15,42,86,19,32,12,10,36,6,4,8,9,7};
    int n=sizeof(Ar)/sizeof(Ar[0]);
    int l=0,h=n-1;
    QuickSort(Ar,l,h);
    for(int i=0;i<n;i++)
      cout<<Ar[i]<<" ";
    return 0;
}