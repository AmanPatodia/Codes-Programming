#include<bits/stdc++.h>
using namespace std;

int nextmultiple(int ne){
    int x;
    for(int k=1;k<ne;k++){
       x=5*k;
       if(x>=ne){
           return x;
           break;
       }
    }
return 0;
}

void gradingstudent(int ar[],int size){
     int grade,next,diff;
     cout<<endl<<"After rounding off grades:";
     for(int g=0;g<size;g++){
         grade=ar[g];
         next=nextmultiple(grade);
         diff=next-grade;
         if(grade>=38 && diff<3){
             grade=next;
             cout<<endl<<grade;
         }
         else 
            cout<<endl<<grade;
    }
}

int main(){
    int n;
    cout<<"Enter number of students:";
    cin>>n;
    int arr[n];
    cout<<endl<<"Enter marks of student:";
    for(int i=0;i<n;i++)
      cin>>arr[i];
    cout<<endl<<"Marks of student before rounding of are:";
    for(int j=0;j<n;j++)
      cout<<" "<<arr[j];
    gradingstudent(arr,n);
    return 0;
}