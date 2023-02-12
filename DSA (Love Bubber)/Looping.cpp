#include<iostream>
using namespace std;

int main()
{
    /*int n;
    cin>>n;
    int i=1;
    int sum=0;
    while(i<=n)
    {
       if(i%2==0)
          sum+=i;
       i++;
    }
    cout<<"Sum is :"<<sum<<endl;

    int n;
    cin>>n;
    int i=2;
    while(i<n)
    {
        if(n%i==0){
            cout<<"Not Prime"<<endl;
            break;
        }
        else{
            cout<<"Prime"<<endl;
            break;
        }
        i++;
    }
    */

    int n;
    cin>>n;
    int i=1;
    cout<<"Farienghet"<<"   "<<"Celcius"<<endl;
    while(i<=n)
    {
        float c=(i-32)*5/9;
        cout<<i<<"               "<<c<<endl;
        i++;
    }
    return 0;
}