#include<bits/stdc++.h>
using namespace std;

class A{
     int n;
     public:
      void input(){
          cout<<"enter value of n:"<<endl;
          cin>>n; 
      }
      void check(){
          if(n%2==0)
             cout<<"even number";
          else{
              cout<<"odd number";
          }
      }
};

class B{
    A a;
    public:
      B(){
          a.input();
          a.check();
      }
};

int main(){
    B b;
    return 0;
}