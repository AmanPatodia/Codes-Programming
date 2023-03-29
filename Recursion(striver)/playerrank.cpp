#include<bits/stdc++.h>
using namespace std;

void answer(vector<int>&rank,vector<int>&player,vector<int>&ans)
{
    int i=0;
    while(i!=player.size())
    {
        int j=0,r=1;
        while(j!=rank.size())
        {
            if(rank[j]!=rank[j-1] && player[i]<rank[j])
            {
                r++;
                j++;
            }
            else if(player[i]<rank[j])
            {
                j++;
            }
            else 
              break;
        }
        i++;
        ans.push_back(r);
    }
}

int main()
{
    vector<int>rank={100,100,50,40,40,20,10};
    vector<int>player={5,25,50,105};
    vector<int>ans;
    answer(rank,player,ans);
    for(auto it = ans.begin();it!=ans.end();it++)
    {
        cout<<*it<<" ";
    }
    
   
    return 0;
}