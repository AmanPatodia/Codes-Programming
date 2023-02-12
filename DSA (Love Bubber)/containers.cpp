#include<bits/stdc++.h>
using namespace std;

int main()
{
    // multimap<int,int>mp;
    // mp.emplace(1,2);
    // mp.emplace(6,2);
    // mp.emplace(6,3);
    // mp.emplace(4,2);
    // mp.emplace(5,2);
    // for(auto it=mp.begin();it!=mp.end();it++)
    // {
    //       cout<<it->first<<" "<<it->second<<endl;
    // }
    //int maxi=0;
    // map<int,int>mpp;
    // for(int i=0;i<5;i++)
    // {
    //     int x;
    //     cin>>x;
    //     mpp[x]++;
    //     if(mpp[x]>mpp[maxi])
    //     {
    //         maxi = x;
    //     }
    // }
    // cout<<maxi<<endl;

    // multiset<int>ms;
    // ms.insert(2);
    // ms.insert(1);
    // ms.insert(5);
    // ms.insert(5);
    // ms.insert(10);
    // ms.insert(6);
    // ms.insert(1);
    
    // for(auto it: ms)
    // {
    //     cout<< it<< " ";
    // }


    //  stack<int>st;
    //  st.push(10);
    //  st.push(20);
    //  st.push(30);
    //  st.push(40);
    //  while(!st.empty())
    //  {
    //     cout<<st.top()<<"->";
    //     st.pop();
    //  }
    //  st.push(23);
    //  if(st.empty())
    //  {
    //     cout<<"true";
    //  }
    //  else{
    //     cout<<"False";
    //  }



    // queue<int>q;
    // if(q.empty())
    // {
    //     for(int i=10;i<16;i++)
    //     {
    //         q.push(i);
    //     }
    // }
    // while(!q.empty())
    // {
    //     cout<<q.front()<<" ";
    //     q.pop();
    // }

    
//     priority_queue<int>pq;
//     pq.push(-10);
//     pq.push(-20);
//     pq.push(-30);
//     pq.push(-10);
//     pq.push(-5);
    
//    while(!pq.empty())
//    {
//        cout<<-1*pq.top()<<" ";
//        pq.pop();
//    }

//   priority_queue<pair<int ,int>>p;
//    p.emplace(1,20);
//    p.emplace(1,21);
//    p.emplace(1,22);
//    p.emplace(2,21); 
//    p.emplace(3,21);
//    p.emplace(5,21);
  

   //Minimum priority queue
//    priority_queue<int,vector<int>,greater<int>>pq;
//    pq.push(10);
//    pq.push(20);
//    pq.push(600);
//    pq.push(18);
//    pq.push(17);
//    pq.push(100);
//    pq.push(50);
   
//    while(!pq.empty())
//    {
//     cout<<pq.top()<<endl;
//     pq.pop();
//    }


// deque data structure

//     deque<int>dq;
//     dq.push_front(10);
//     dq.push_front(20);
//     dq.push_back(30);
   
//    dq.clear();
//    for(auto it= dq.begin();it!=dq.end();it++)
//     {
//         if(!dq.empty())
//         {
//             cout<<*it<<endl;
//         }
//         dq.pop_front();
//     }


//list data structure


    list<int>l1;
    l1.push_back(10);
    
    l1.push_back(50);

    l1.push_back(20);

    l1.push_back(30);

    l1.push_back(40);

    l1.remove(10);
    
   if(!l1.empty())
   {
    for(auto it= l1.begin();it!=l1.end();it++)
    {
        if(!l1.empty())
        {
            cout<<*it<<endl;
        }

    }
   }
   l1.remove(50);
   
    
    return 0;
}