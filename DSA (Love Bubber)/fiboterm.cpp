#include<iostream>
using namespace std;

int fiboterm(int n)
{
    int a=0,b=1,sum=0;
    for(int i=2;i<n;i++)
    {
        sum=a+b;
        a=b;
        b=sum;
    }
    return sum;
}

int main()
{
    int n=48;
    cout<<fiboterm(n)<<endl;
    return 0;
}