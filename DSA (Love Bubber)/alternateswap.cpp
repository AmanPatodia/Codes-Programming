#include<iostream>
using namespace std;


void swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

void alternateSwap(int arr[],int n)
{
    int i=0,j=i+1;
    while(i<j && (i<n && j<n))
    {
        swap(&arr[i],&arr[j]);
        i+=2;
        j+=2;
    }
}

int main()
{
    int arr[100];
    int size;
    cin>>size;
    cout<<"Enter"<<size<<"elements in array : "<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Array elements after swapping alternates:"<<endl;
    alternateSwap(arr,size);
    for(int j=0;j<size;j++)
    {
         cout<<arr[j]<<" ";
    }
    return 0;
}