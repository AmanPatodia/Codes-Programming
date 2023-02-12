#include<bits/stdc++.h>
using namespace std;

int main(){
    int ar[]={1,2,3,4,1,5,3,5};
    int k,c=0,v;
    cout<<"Enter value of n and k:";
    cin>>k;
    for(int i=0;i<8;i++){
        for(int j=i;j<8;j++){
            if(ar[i]==ar[j]){
                c++;
                v=ar[j];
            }
            break;
        }
    }
    if(c==k){
        cout<<v;
    }
    return 0;
}