#include<bits/stdc++.h>
using namespace std;

int main(){
    int rollno;
    int c,r1;
    cout<<"enter no of records";
    cin>>c;
    ofstream s;
    s.open("sample.txt");
    for(int i=0;i<c;i++){
        cout<<"enter "<<i+1<<"st record";
        cin>>rollno;
        cout<<"record added sucessfully"<<endl;
        s<<"\t"<<rollno;
    }
    s.close();
    cout<<"enter rollno you want to update:";
    cin>>r1;
    ifstream a;
    a.open("sample.txt");
    while(a.eof()==0){
        cout<<"records are:"<<endl;
        a>>rollno;
        cout<<rollno<<"\t";}
    while(!a.eof()){
        if(r1==rollno){
            cout<<"its present";
        }
    }
       if(r1==rollno){
           cout<<"Enter new rollno";
           cin>>rollno;
           ofstream d;
           d.open("sample.txt");
           d<<rollno;
           d.close();
       }
    }
    a.close();
}