#include<bits/stdc++.h>
using namespace std;

class Check{
    int num;
    public:
       Check(){
           cout<<"Enter number :"<<endl;
           cin>>num;
       }
       void find(){
           if(num>0)
              cout<<"No is positive"<<endl;
           else if(num==0)
              cout<<"No is zero"<<endl;
           else 
              cout<<"Number is negative"<<endl;
       }
};

int main(){
   Check c;
   c.find();
   return 0;
}