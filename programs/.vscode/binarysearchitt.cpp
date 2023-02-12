#include<bits/stdc++.h>
using namespace std;

int binarysearch(int A[],int size,int key)
{
    int mid,low=1,high=size;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(key==A[mid])
        {
            return mid;
            break;
        }
        if(key>A[mid])
           low=mid+1;
        else
           high=mid-1;
    }
    return -1;
}

int main()
{
    int Arr[]={10,20,30,40,50,60,70,80,90,100};
    int n=sizeof(Arr)/sizeof(Arr[0]);
    int ele=70;
    int x=binarysearch(Arr,n,ele);
    if(x==-1)
       cout<<"Element is not present"<<endl;
    else
       cout<<"Elemet is present at loc :"<<x+1;
    return 0; 
}
