#include<iostream>
#include<math.h>
using namespace std;
void octaltobinary(int arr[],int num)
{
    int c;
    for(int i=0;i<num;i++)
    {
       c=num%2;
       arr[i]=c;
       num=num/2;
    }
    cout<<"After conversion a octal no to binary no is:";
    for(int i=6;i>0;i--)
    {
        cout<<arr[i];
    }
}
int main()
{
    int n,ar[8];
    cout<<"Enter two digit octal no. :";
    cin>>n;
    octaltobinary(ar,n);
    return 0;
}