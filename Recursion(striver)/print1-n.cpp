#include<bits/stdc++.h>
using namespace std;

void f(int i,int N)
{
   if(i==0) return ;
   f(i-1,N);
   cout<<i<<endl;
}


int main()
{
    int n;
    cin>>n;
    f(n,n);
    return 0;
}