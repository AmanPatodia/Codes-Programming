#include<iostream>
using namespace std;


void swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

void reverse(int arr[],int s)
{
    int i=0,j=s-1;
    while(i<=j)
    {
        swap(&arr[i],&arr[j]);
        i++;
        j--;
    }
}

int main()
{
    int arr1[6]={2,7,5,9,6};
    reverse(arr1,5);
    for(int i=0;i<5;i++)
    {
        cout<<arr1[i]<<" ";
    }
    return 0;
}
