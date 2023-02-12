#include<bits/stdc++.h>
using namespace std;

class student{
      const char *names[5]={ "aman","tushar","ankit","ankush","gaurav" };
       public:
          student(){
              cout<<"Names of students are:"<<endl;
              for(int i=0;i<5;i++){
                  cout<<" "<<names[i]<<endl;
              }
          }
          student(const char a[],const char b[]){
              cout<<"new name is:"<<a<<" and "<<b<<endl;
              cout<<"Copy these newest value of names in 1 and 2 positions:"<<endl;
              names[0]=a;
              names[1]=b;
              cout<<"Now the names are updated:"<<endl;
              for(int i=0;i<5;i++){
                  cout<<" "<<names[i]<<endl;
              }
          }
};

int main(){
    student s;
    student s1("raghav","lakshay");
    return 0;
}