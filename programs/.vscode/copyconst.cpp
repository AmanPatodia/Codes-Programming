#include<bits/stdc++.h>
using namespace std;

class A{
    int num1,num2;
    public:
      A(int x,int y){
          num1=x;
          num2=y;        
      }
      A(A &ref){
          cout<<"USE OF COPY CONSTRUCTOR"<<endl;
          cout<<"Value of num1 is:"<<ref.num1<<endl;
          cout<<"Value of num2 is:"<<ref.num2<<endl;
          cout<<"Addition of two no.s are:"<<ref.num1+ref.num2<<endl;
          cout<<"subtraction of two no.s are:"<<ref.num1-ref.num2<<endl;
          cout<<"multiplication of two no.s are:"<<ref.num1*ref.num2<<endl;
          cout<<"division of two no.s are:"<<ref.num1/ref.num2<<endl;
          
      }
};

int main(){
    A a(50,5);
    A b=a;
    return 0;
}