#include<bits/stdc++.h>
using namespace std;

int counter(int *ar,int size){
    int c=0;
    for(int i=0;i<size-1;i++){
        if(ar[i]>ar[i+1]){
            c+=abs(ar[i]-ar[i+1]);
            ar[i+1]=ar[i];
        }
    }
   return c;
}
int main(){
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   cout<<counter(arr,n);
}