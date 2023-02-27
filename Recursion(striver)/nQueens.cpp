#include<bits/stdc++.h>
using namespace std;

bool isSafe(int r,int c,vector<string>board,int n)
{
    //check upper diagnol
    int dupr=r;
    int dupc=c;

    while(r>=0 && c>=0)
    {
        if(board[r][c]=='Q') return false;
        r--;
        c--;
    }

    r=dupr;
    c=dupc;

    //check row wise
    while(c>=0)
    {
        if(board[r][c]=='Q') return false;
        c--;
    }

    r=dupr;
    c=dupc;
    //check lower diagnol
    while(r<n && c>=0)
    {
        if(board[r][c]=='Q') return false;
        c--;
        r++;
    }
    return true;
}

void solveNQueens(int col,vector<string>&board,vector<vector<string>>&ans,int n)
{
      if(col==n)
      {
        ans.push_back(board);
        return;
      }
      for(int row = 0;row<n;row++)
      {
        if(isSafe(row,col,board,n))
        {
            board[row][col]='Q';
            solveNQueens(col+1,board,ans,n);
            board[row][col]='.';
        }
      }
}

void printqueen(vector<string>v1)
{
    for(auto it: v1)
    {
        cout<<" "<<it<<""<<endl;
    }
    
}

int main()
{
    int n,c;
    cout<<"Enter the value of n for N*N matrix:"<<endl;
    cin>>n;
    vector<vector<string>>ans;
    vector<string>board(n);
    string s(n,'.');
    for(int i=0;i<n;i++)
    {
        board[i]=s;
    }
    solveNQueens(0,board,ans,n);
    for(auto it = ans.begin();it!=ans.end();it++)
    {
          c++;
          printqueen(*it);
          cout<<endl;
    }
    cout<<c<<endl;
    return 0;
}
