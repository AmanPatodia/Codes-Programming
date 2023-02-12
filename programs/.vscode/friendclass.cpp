#include<bits/stdc++.h>
using namespace std;

class A{
    private:
      int a,b;
    public:
        void input(){
            cout<<"Enter value of a:";
            cin>>a;
        }
        friend class B;
};

class B{
    public:
   void inp(A &x){
       cout<<"Enter value of b:";
       cin>>x.b;
   } 
   void disp(A &x){
       cout<<"Value of a is:"<<x.a<<endl;
       cout<<"Value of b is:"<<x.b<<endl;
   }
   void sum(A &x){
       cout<<"Sum of two no are:"<<x.a+x.b<<endl;
   }
};

int main(){
    system("cls");
    A x;
    x.input();
    B y;
    y.inp(x);
    y.disp(x);
    y.sum(x);
    return 0;
}