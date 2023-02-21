#include<bits/stdc++.h>
using namespace std;
 
int ways(int n)
{
    if(n==0) return 1;
     if(n<0) return 0;
       return ways(n-3)+ways(n-2)+ways(n-1);
}

int main()
{
    int n;
    cout<<"Enter value of n :";
    cin>>n;
    cout<<ways(n);
}