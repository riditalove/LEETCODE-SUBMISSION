#include<bits/stdc++.h>

using namespace std;

bool visited[100][100]= {false};

void margin_dfs(int i,int j,vector<vector<char>>&board)
{
    if(i<0 || j<0 || i>=board.size() || j>=board[0].size())
    {
        //cout<<"KEFH "<<i<<" " << j<<endl;
        return ;
    }
    else if(board[i][j]=='X'||visited[i][j]==true)
    {
        return;
    }
    else if(board[i][j]=='O' && visited[i][j]==false)
    {
       // cout<<"OK " <<i<<" "<<j<<endl;
        visited[i][j]=true;
        margin_dfs(i-1,j,board);
        margin_dfs(i+1,j,board);
        margin_dfs(i,j+1,board);
        margin_dfs(i,j-1,board);
    }
}

void dfs(int i,int j,vector<vector<char>>&board)
{
    if(i==0 || j==0 || i==(board.size())-1 || j==(board[0].size())-1)
    {
        return;
    }
    else if(board[i][j]=='X' || visited[i][j]==true)
    {
        return;
    }
    else if(board[i][j]=='O'&& visited[i][j]==false)
    {
        board[i][j]='X';
        // cout<<i<<" "<<j<<endl;
        visited[i][j]=true;
        dfs(i,j-1,board);
        dfs(i,j+1,board);
        dfs(i-1,j,board);
        dfs(i+1,j,board);



    }
}

int main()
{
    vector<vector<char>>board= {{'O','X','X','O','X'},{'X','O','O','X','O'},{'X','O','X','O','X'},{'O','X','O','O','O'},
        {'X','X','O','X','O'}
    };
    int n=board.size();
    int m=board[0].size();
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if((board[i][j]=='O')&&(i==0 || j==0 || i==n-1 || j==m-1)&&visited[i][j]==false)
            {
                margin_dfs(i,j,board);
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if((board[i][j]=='O')&&visited[i][j]==false)
            {
                dfs(i,j,board);
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<board[i][j]<< " ";
        }
        cout<<endl;
    }

}
