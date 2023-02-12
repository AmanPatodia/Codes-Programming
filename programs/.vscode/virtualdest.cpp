#include<bits/stdc++.h>
using namespace std;

class base{
    public:
     base(){
         cout<<"constructor of base class"<<endl;
     }
     virtual ~base(){
         cout<<"Destructor of base class"<<endl;
     }
};

class derived:public base{
   public:
   derived(){
       cout<<"constructor of derived class"<<endl;
   }
   ~derived(){
       cout<<"Destructor of derived class "<<endl;
   }
};

int main(){
    base *p=new derived;
    delete p;
}