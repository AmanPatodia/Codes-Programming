#include<iostream>
using namespace std;
int prime(int num1,int num2)
{
  int i;
  for(i=num1;i<=num2;i++)
  {  int j;
    for(j=2;j<i;j++)
    {
        if(i%j==0)
        {
            break;
        }
    } if(i==j)
      cout<<i<<endl;
  }
  return 0;
  
}
int main()
{
    int a,b;
    cout<<"enter two numbers :";
    cin>>a>>b;
    prime(a,b);
    return 0;

}