#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cout<<"enter test case";
    cin>>t;
    while(t--){
        ll x,y;
        cout<<"enter x and y:";
        cin>>x>>y;
        if(x<y){
            ll ans;
            if(y%2!=0)
               ans=(y*y)-x+1;
            else 
               ans=((y-1)*(y-1))+x;
            cout<<ans<<endl;
        }
        else{
            ll ans;
            if(x%2!=0)
               ans=((x-1)*(x-1))+y;
            else 
               ans=(x*x)-y+1;
            cout<<ans<<endl;
        }
    }
    return 0;
     
}