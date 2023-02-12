#include<bits/stdc++.h>
using namespace std;

int A[]={1,2,3,4,5,6,7,8,9,10,11};
int n = sizeof(A)/sizeof(A[0]);

int RBinSearch(int l,int h,int k)
{
    if(l==h)
    {
        if(k==A[l])
           return l;
        else
          return -1;
    }
    else
    {
        int mid=(l+h)/2;
        if(A[mid]==k)
        {
            return mid;
        }
        else{
            if(k>A[mid])
              return RBinSearch(mid+1,h,k);
            else
              return RBinSearch(l,mid-1,k);
        }
    }
}

int main()
{
    int low=0 ,high=n;
    int key=11;
    int x=RBinSearch(low,high,key);
    if(x==-1)
       cout<<"Element is not present";
    else
      cout<<"Element is present at location: "<<x+1<<endl;
}