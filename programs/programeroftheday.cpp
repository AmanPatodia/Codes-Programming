string dayOfProgrammer(int year) {
int date;
stack<char>v;
if(year>=1700 && year<=1917)
{
    if(year % 4==0)
    { 
        for(int i=year;i>0;i=i/10)
        {
            int l=i%10;
            v.push(l+'0');
        }   
        v.push('.');
        v.push('9');
        v.push('0');
        v.push('.');
        v.push('2');
        v.push('1');
    }
    else{
        for(int i=year;i>0;i=i/10)
        {
            int l=i%10;
            v.push(l+'0');
        }   
        v.push('.');
        v.push('9');
        v.push('0');
        v.push('.');
        v.push('3');
        v.push('1');
    }
    }
if(year>=1919 && year<=2700)
{
    if(year % 400==0 || (year % 4==0 && year % 100!=0))
    { 
        for(int i=year;i>0;i=i/10)
        {
            int l=i%10;
            v.push(l+'0');
        }   
        v.push('.');
        v.push('9');
        v.push('0');
        v.push('.');
        v.push('2');
        v.push('1');
    }
    else{
        for(int i=year;i>0;i=i/10)
        {
            int l=i%10;
            v.push(l+'0');
        }   
        v.push('.');
        v.push('9');
        v.push('0');
        v.push('.');
        
        v.push('3');
        v.push('1');
    }
    }
if(year==1918)
{
        for(int i=year;i>0;i=i/10)
        {
            int l=i%10;
            v.push(l+'0');
        }   
        v.push('.');
        v.push('9');
        v.push('0');
        v.push('.');
        
        v.push('6');
        v.push('2');
}
    string s;
while(v.empty() == false){
    s = s + v.top();
    v.pop();
    }
return s;
}