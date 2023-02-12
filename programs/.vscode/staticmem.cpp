#include<bits/stdc++.h>
using namespace std;

class fact{
    static float num,s;
    int i,f=1;
    public:
    void calculate(){
        cout<<"How Factorial is working:";
        for(i=1;i<=num;i++)
            cout<<endl<<(f=f*i);
        cout<<endl<<"How Sum of Factroials is calculating:";
        f=1;
        for(i=1;i<=num;i++){
            f=f*i;
            cout<<endl<<(s=s+f);}
      cout<<endl<<"Factorial of number 5 is:"<<f<<endl;
      cout<<endl<<"Sum of number of factorials is:"<<s<<endl; 
    }
    void show(){
        cout<<"----------Welcome to factiorial calculator---------- "<<endl;
        
    }
};
float fact::num=5;
float fact::s=0;
int main(){
    fact k;
    k.show();
    k.calculate();
    return 0;
}