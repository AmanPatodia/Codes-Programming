#include<bits/stdc++.h>
using namespace std;

void calculatesnotes(int amount)
{
    int x=0,y=0;
    switch (1)
    {
    case 1:cout<<"100 rupee notes :";
           x=amount/100;
           cout<<x<<endl;
           amount-=x*100;
    case 2: cout<<"50 rupee notes :";
           x=amount/50;
           cout<<x<<endl;
           amount-=x*50;
    case 3: cout<<"20 rupee notes :";
           x=amount/20;
           cout<<x<<endl;
           amount-=x*20;
    case 4:cout<<"1 rupee notes :";
           cout<<amount<<endl;
           break;
    }
}

int main()
{
    int amount=0;
    cout<<"Enter amount :"<<endl;
    cin>>amount;
    calculatesnotes(amount);
}