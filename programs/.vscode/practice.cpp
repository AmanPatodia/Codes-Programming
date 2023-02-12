#include<bits/stdc++.h>
using namespace std;

template <class T>
class arithmetic
{
  T a;
  T b;
  public:
     arithmetic(T a,T b)
     {
      this->a=a;
      this->b=b;
     }
     T add();
     T sub();
};

template <class T>
T arithmetic<T>::add()
{
  T c;
  c=a+b;
  return c;
}

template <class T>
T arithmetic<T>::sub()
{
  T c;
  c=a-b;
  return c;
}

int main()
{
  arithmetic<int>a(10,2);
  cout<<a.add()<<endl;
  cout<<a.sub()<<endl;
  arithmetic<float>a1(10.2,10.1);
  cout<<a1.add()<<endl;
  cout<<a1.sub()<<endl;
  arithmetic<char>a2('A','B');
  cout<<a2.add()<<endl;
  cout<<a2.sub()<<endl;
  return 0;
}