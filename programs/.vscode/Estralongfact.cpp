#include<bits/stdc++.h>
using namespace std;

int256_t f = 1;

int main()
{
    int n=30;
    
    for(int i=n;i>0;i--)
    {
         f = f * i;
    }
    cout<<f<<endl;
}