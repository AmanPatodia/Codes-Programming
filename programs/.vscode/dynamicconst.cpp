#include<bits/stdc++.h>
using namespace std;

class inislize{
   int *p,*q;
   public:
     inislize(){
         p=new int;
         *p=10;
         cout<<"Value for object i1 is :"<<*p<<endl;
         cout<<"Fibonacci series for object i1 is :";
         fibo(*p);    
     }
     inislize(int x){
         q=new int;
         *q=x;
         cout<<endl<<"Value for object i2 is :"<<*q<<endl;
         cout<<endl<<"Fibonacci series for object i2 is :";
         fibo(*q); 
     }
     void fibo(int j){
        int a=0,b=1,s=0;
        j-=2;
        cout<<a<<" "<<b<<" ";
        while(j--){
            s=a+b;
            cout<<s<<" ";
            a=b;
            b=s;
        }
     }
};

int main(){
   inislize i1,i2(20);
   return 0;
}