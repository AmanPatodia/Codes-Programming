#include<bits/stdc++.h>
using namespace std;

void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}

void bubblesort(int *p,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(p[j]>p[j+1])
            {
                swap(p[j],p[j+1]);
            }
        }
    }
}

int main()
{
    int arr[]={-1,5,4,6,-6,-4,10,-12,45,-6,-3};
    int k;
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<size;
    cout<<"Before sorting :"<<endl;
    for(int i=0;i<size;i++)
      cout<<arr[i]<<" ";
    cout<<endl<<"After sorting :"<<endl;
    bubblesort(arr,size);
    for(int i=0;i<size;i++)
      cout<<arr[i]<<" ";
    cout<<endl<<"Enter the k value to find kth mim and max element in array:";
    cin>>k;
    cout<<k<<"nd max element is:"<<arr[size-k]<<endl;
    cout<<k<<"nd min element is:"<<arr[k-1]<<endl;
    return 0;
}