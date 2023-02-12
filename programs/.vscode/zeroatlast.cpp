#include<bits/stdc++.h>
using namespace std;

void  swap(int * p,int * q){
    int temp=*p;
    *p=*q;
    *q=temp;
}
void check(int *ar,int size){
    int i=0,k=0;
    for(int j=0;j<size;j++){
        if(ar[j]==0)
           i++;
        else{
            swap(ar[k],ar[j]);
            k++;
        }
    }
    
}
int main(){
    int n;
    cout<<endl<<"Enter size of array:";
    cin>>n;
    int arr[n];
    cout<<endl<<"Enter elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl<<"array are:";
    for(int i=0;i<n;i++){
        cout<<" "<< arr[i];
    }
    check(arr,n);
    cout<<endl<<"Array after placing all zeros in last";
    for(int i=0;i<n;i++)
       cout<<" "<<arr[i];
}