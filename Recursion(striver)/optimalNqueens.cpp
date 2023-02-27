#include<bits/stdc++.h>
using namespace std;

void solveNQueens(int col,vector<string>&board,vector<vector<string>>&ans,vector<int>&leftrow,
    vector<int>&upperDiagnol,vector<int>&lowerDiagnol,int n)
{
   if(col==n)
   {
    ans.push_back(board);
    return ;
   }
   for(int row=0;row<n;row++)
   {
    if((leftrow[row]==0) && (upperDiagnol[n-1 + col-row]==0) && (lowerDiagnol[row+col]==0))
    {
        board[row][col]=='Q';
        leftrow[row]=1;
        upperDiagnol[n-1+col-row]=1;
        lowerDiagnol[row+col]=1;
        solveNQueens(col+1,board,ans,leftrow,upperDiagnol,lowerDiagnol,n);
        board[row][col]='.';
        leftrow[row]=0;
        upperDiagnol[n-1+col-row]=0;
        lowerDiagnol[row+col]=0;
    }
   }
}

void printChessBoard(vector<string>v1)
{
    for(auto it:v1)
    {
        cout<<it<<endl;
    }
    cout<<endl;
}

int main()
{
    int n;
    cout<<"Enter the matrix order : "<<endl;
    cin>>n;
    vector<vector<string>>ans;
    vector<string>board(n);
    string s(n,'.');
    for(int i=0;i<n;i++)
    {
        board[i]=s;
    }
    vector<int>leftrow(n,0),upperDiagnol(2 * n - 1,0),lowerDiagnol(2 * n - 1,0);
    solveNQueens(0,board,ans,leftrow,upperDiagnol,lowerDiagnol,n);
    cout<<"After Queens are placed the chess board is look like : "<<endl;
    for(auto it = ans.begin();it!=ans.end();it++)
    {
        printChessBoard(*it);
        cout<<endl;
    }
    return 0;
}