#include<bits/stdc++.h>
using namespace std;

int * leaders(int a[],int n)
{
    int a1[n];
    int ele=a[n-1];
    a1[0]=ele;
    int x=0;
    for(int i=n-2;i>0;i++)
    {
        int j=2;
        if(a[i]>=ele)
        {
            a1[i-j]=a[i];
            j--;
        }
        else{
            x=a[i];
        }
    }
    return a;
}

int main()
{
   int arr[]={16,17,3,5,2};
   int size=sizeof(arr)/sizeof(arr[0]);
   int *p=leaders(arr,size);
   for(int p=0;p<size;p++)
   {
    cout<<arr[p]<<" ";
   }
   return 0;
}