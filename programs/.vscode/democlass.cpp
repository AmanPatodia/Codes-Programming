#include<bits/stdc++.h>
using namespace std;
const float pi=3.147;

class shapes{
    private:
       float l,b,s,r,area;
    public:
       void input();
       float rectangle();
       float square();
       float circle();
       void  display();
};

void shapes::input(){
    cout<<"Enter length and breadth of rectangle:";
    cin>>l>>b;
    cout<<"Enter side of square:";
    cin>>s;
    cout<<"Enter radius of circle:";
    cin>>r;
}

float shapes::rectangle(){
    return l*b;
}

float shapes::square(){
    return s*s;
}

float shapes::circle(){
    return pi*r*r;
}
void shapes::display(){
    cout<<"Area of rectangle are:"<<rectangle()<<endl;
    cout<<"Area of square are:"<<square()<<endl;
    cout<<"Area of circle are:"<<circle()<<endl;
}

int main(){
    system("cls");
    shapes s;
    s.input();
    s.display();
    return 0;
}