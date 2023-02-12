#include<bits/stdc++.h>
using namespace std;


void insert_anyposition(int ar[],int pos,int size,int ele)
{
     for(int i=size;i>=pos;i--){
           ar[i]=ar[i-1];
     }
     ar[pos-1]=ele;
}

int main()
{
    int arr[]={2,5,8,10,15,19};
    int size=sizeof(arr)/sizeof(arr[0]);
    int element=57;
    int pos=7;
    insert_anyposition(arr,pos,size,element);
    cout<<endl<<"Element after insertetion at the anypos:"<<endl;
    for(int i=0;i<=size;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}