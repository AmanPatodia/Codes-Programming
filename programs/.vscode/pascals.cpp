#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if(n==0)
      return 1;
    return n*fact(n-1);
}

int combination(int n,int r)
{
    return fact(n)/(fact(r)*fact(n-r));
}

int main()
{
    int num;
    cout<<"Enter num"<<endl;
    cin>>num;
    for(int line=0;line<num;line++)
    {
        for(int j=0;j<=num-line-2;j++)
        {
            cout<<" ";
        }
         for(int i=0;i<=line;i++)
         {
            cout<<combination(line,i)<<" ";
         }
         cout<<"\n";
    }
    return 0;
}