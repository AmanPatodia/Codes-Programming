#include<bits/stdc++.h>
using namespace std;

class Prime{
    public:
       int n,i;
    public:
        Prime(){
            n=5;
        }
};

void disp(Prime a){
    cout<<"Value of n is:"<<a.n<<endl;
    int f=1,i=a.n;
    while(i){
        f=f * i;
        i--;
    }
    cout<<"Factorial is :"<<f;
}

int main(){
    Prime a;
    disp(a);
    return 0;
}
