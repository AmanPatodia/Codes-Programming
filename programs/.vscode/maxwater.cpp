#include<bits/stdc++.h>
using namespace std;
int maxwater(int,int);
int minimum(int,int);

int minimum(int a,int b){
    if(a<=b)
       return a;
    else
       return b;
}

int maxwater(int ar[],int size){
       int max=0,min=0,area,diff;
       for(int i=0;i<size;i++){
           for(int j=i+1;j<size;j++){
              min=minimum(ar[i],ar[j]);
              diff=abs(i-j);
              area=min*diff;
           }
        if(max<area)
           max=area;
       }
    return max;
}

int main(){
    int n,m;
    cout<<"size of array:";
    cin>>n;
    int arr[n];
    cout<<endl<<"Enter elements:";
    for(int i=0;i<n;i++)
       cin>>arr[i];
    cout<<endl<<"Elements are:";
    for(int i=0;i<n;i++)
       cout<<" "<<arr[i];
    m=maxwater(arr,n);
    cout<<endl<<"Maximum water are:"<<m;
}



