#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,2,4,8,12,45,56},i,l,n,mid,high,low;
    cout<<"enter element you want to find :";
    cin>>n;
    l=sizeof(arr)/sizeof(arr[0]);
    low=0;
    high=l-1;
    while(low<=high)
    {
      mid=(low+high)/2;
      if(arr[mid]>n)
        high=mid-1;
      else if(arr[mid]==n)
        {cout<<"Element is present at location :"<<mid;
        break;
        }
      else
         low=mid+1;
    }
    if(low>high)
    cout<<"Element is not present :";
  return 0;   
}