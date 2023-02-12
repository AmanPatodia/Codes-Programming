#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m1[2][2]={{1,2},{3,4}};
    int m2[2][2]={{1,2},{3,4}},i,j,k;
    int m3[2][2]={{},{}};
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<m1[i][j]<<" ";
            m3[i][j]=m1[i][j];
            
        }
        cout<<"\n";
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<m3[i][j];
            
        }
    }
    
}