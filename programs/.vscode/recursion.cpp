#include<bits/stdc++.h>
using namespace std;

int fun1(int n)
{
    
    if(n>0)
    {
        
         fun1(n-1);
        cout<<n<<" ";
    }
}

int main()
{
    fun1(3);
    return 0;
}