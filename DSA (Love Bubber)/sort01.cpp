#include<iostream>
using namespace std;

void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}

void sort01(int arr[],int s)
{
    int i=0,j=s;
    while(i<j)
    {
        while(arr[i]==0 && i<j)
           i++;
        while(arr[j]==1 && i<j)
            j--;
        if((arr[i]==1 && arr[j]==0) && i<j)
        {
              swap(arr[i],arr[j]);
              i++;
              j--;
        }
    }
}

int main()
{
    int ar[]={0,1,0,1,1,0,0,1,0,0};
    sort01(ar,10);
    for(int i=0;i<10;i++)
    {
        cout<<ar[i]<<" ";
    }

    return 0;

}