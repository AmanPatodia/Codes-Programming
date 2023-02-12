void bonAppetit(vector<int> bill, int k, int b) {

int donteat=bill[k],sum=0,c;
for(auto it=bill.begin();it!=bill.end();bill++)
{
    if(*it==donteat)
    {
        continue;
    }
    else{
        sum+=*it;
    }
}
c=b-sum;
if(c==0)
{
    cout<<"Bon Apetit";
}
else{
    cout<<c;
}

}
