#include<iostream>
using namespace std;

int count(int n)
{
    int c=0;
    while(n!=0)
    {
        int bit=n&1;
        if(bit==1)
          c++;
        n=n>>1;
    }
    return c;
}

int main()
{
    int a=5,b=3;
    cout<<count(a)+count(b)<<endl;
    return 0;
}
