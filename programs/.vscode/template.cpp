#include<bits/stdc++.h>
using namespace std;

template <class t>
t fun1(t a,t b){
    t result=a+b;
    return result;
}
template<class T>
class A{
    public: 
       T a=5;
       T b=2;
       T fun(){
        return a+b;
       }
};

int main()
{
    A<int>d;
    cout<<"Using Class template \n Addition is:"<<d.fun()<<"\n\n";
    int i=2,j=3;
    float m=2.3,n=1.2;
    cout<<"Using Function template \n Addition of i and j is:"<<fun1(i,j);
    cout<<"\n Addition of m and n is:"<<fun1(m,n);
    
    return 0;
}
