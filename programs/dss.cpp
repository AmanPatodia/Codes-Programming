#include<iostream>
using namespace std;
int main()
{
    int arr[20],found=0,i,n,data;
    cout<<"Enter number of elements :";
    cin>>n;
    cout<<"Enter element to be found :";
    cin>>data;
    
    for(i=0;i<n;i++)
    {
       cin>>arr[i];
    }
    for ( i = 0; i < n; i++)
    {
        if(arr[i]==data)
        {
            cout<<"Element is present at position:  " <<i+1;
            found=1;
            break;
        }
    }
    if(found==0)
    cout<<"Element is not present";
    return 0;
}