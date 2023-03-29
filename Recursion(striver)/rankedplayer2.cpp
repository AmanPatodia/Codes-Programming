#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>rank={100,100,50,40,40,20,10};
    vector<int>player={5,25,50,105};
    vector<int>ans;

    rank.erase(unique(rank.begin(),rank.end()),rank.end() );
    
    for(int i=0;i<player.size();i++)
    {
        rank.push_back(player[i]);
        sort(rank.begin(),rank.end(),greater<int>());
        auto it = find(rank.begin(),rank.end(),player[i]);
        int pos = it - rank.begin();
        ans.push_back(pos+1);
    }

    for(auto it : ans)
    {
        cout<<it<<" ";
    }
    return 0;
}