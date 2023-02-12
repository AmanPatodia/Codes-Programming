#include<bits/stdc++.h>
using namespace std;

void checkpalindrome(char str[],int s){
    if(s%2==0){
        int leng,i=0,j,c=0,h;
        j=s-1;
        leng=s/2;
        h=leng;
        while(leng--){
            if(str[i]==str[j]){
                i++;
                j--;
                c++;
            }
        }
        if(h==c)
           cout<<endl<<"yes";
        else 
           cout<<endl<<"no";
    } 
    else{
        int leng,i=0,j,c=0,h;
        j=s-1;
        leng=s/2;
        h=leng;
        while(leng--){
            if(str[i]==str[j]){
                i++;
                j--;
                c++;
            }
        }
        if(h==c)
           cout<<endl<<"yes";
        else 
           cout<<endl<<"no";
    }

}

int main(){
    system("cls");
    int size;
    cout<<"enter size of string";
    cin>>size;
    char str1[size];
    cout<<"Enter string:";
    cin>>str1;
    cout<<"string are:";
    for(int i=0;str1[i]!='\0';i++)
       cout<<str1[i];
    checkpalindrome(str1,size);
    return 0;
}