#include<bits/stdc++.h>
using namespace std;
int i,d,space,k=0;
int main()
{
    cin>>d;
    if(d>0 && d<11){
    for(i=1; i<=4; i++)
    {
        for(space=1; space<=(6-i); space++)
            cout<<" ";
        while(k!=(2*i-1))
        {
            cout<<"0";
            k++;
        }
        k=0;
        cout<<endl;
    }
    for(i=1; i<2; i++)
    {
        for(space=1; space<=(6-i); space++)
            cout<<" ";
        cout<<"0"<<endl;
    }
    cout<<endl<<"Thankyou for your help towards nature.";
    }
    else if(d>10 && d<21){
        for(i=1; i<=4; i++)
    {
        for(space=1; space<=(6-i); space++)
            cout<<" ";
        while(k!=(2*i-1))
        {
            cout<<"*";
            k++;
        }
        k=0;
        cout<<endl;
    }
    for(i=1; i<2; i++)
    {
        for(space=1; space<=(6-i); space++)
            cout<<" ";
        cout<<"*"<<endl;
    }
    cout<<endl<<"Thankyou for your help towards nature.";
    }
    else{
        return 0;
    }
    return 0;
}

