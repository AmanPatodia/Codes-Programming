#include<bits/stdc++.h>
using namespace std;

int fibo(int n)
{
    if(n<=1) return n;
    return fibo(n-1)+fibo(n-2);
}


int main()
{
    int n;
    cout<<"enter value of n : "<<endl;
    cin>>n;
    cout<<fibo(n)<<endl;
}
