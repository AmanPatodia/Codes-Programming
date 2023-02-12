#include<bits/stdc++.h>
using namespace std;

float probability(int ar[],int X,int N){
       int count=0;
       int randomindex;
       srand(time(NULL));
       randomindex=rand()%N;
       int ar1=ar[randomindex];
       cout<<"Random no is:"<<ar1<<"\n";
       for(int j=0;j<N;j++){
            if(ar1==ar[j] && ar1>X){
                count++;
            }
       }
      float f=(float) count/N;
      return f;     
}


int main(){
    int x,n;
    float a;
    cout<<"Enter how many elements you want to store in an array: \n";
    cin>>n;
    int arr[n];
    cout<<"Enter elements: \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Array are:\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nEnter the value of x: \n";
    cin>>x;
    a=probability(arr,x,n);
    printf("Probability of choosen number greater than X is: %.2f",a);
    return 0;
}