#include<iostream>
using namespace std;

bool findUniqueElement(int arr[],int n)
{
  int x=arr[0];
  for(int i=1;i<n;i++)
  {
    x=x^arr[i];
  }
  if(x==0)
     return true;
  else 
     return false;
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
    bool x=findUniqueElement(arr,size);
    cout<<"occrence "<<x<<endl;
    return 0;
}