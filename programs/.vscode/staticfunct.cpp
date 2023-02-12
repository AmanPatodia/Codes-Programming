#include<bits/stdc++.h>
using namespace std;

class calculate{
   public:
   static int r,temp,sum;
   static void palindrome(int n){    
     temp=n;    
     while(n>0)    
       {    
         r=n%10;    
         sum=(sum*10)+r;    
         n=n/10;    
       }    
      if(temp==sum)    
          cout<<"Number is Palindrome.";    
      else    
         cout<<"Number is not Palindrome.";  
   }
   static void armstrong(int n){      
          temp=n;    
          while(n>0)    
             {    
               r=n%10;    
               sum=sum+(r*r*r);    
               n=n/10;    
             }    
           if(temp==sum)    
              cout<<"Armstrong Number."<<endl;    
           else    
              cout<<"Not Armstrong Number."<<endl;
     }
};
int calculate::temp=0;
int calculate::r=0;
int calculate::sum=0;
int main(){
    calculate k;
    int num;
    cout<<"Enter a number:";
    cin>>num;
    k.palindrome(num);
    cout<<endl;
    k.armstrong(num);

    return 0;
}