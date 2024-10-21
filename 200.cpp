#include<bits/stdc++.h>

using namespace std;

int n=0;
int m=0;
int ok;
void dfs(int i,int j,vector<vector<char>>&grid)
{
    if(i<0 || i>=n || j>=m || j<0)
    {
        return;
    }
    if(grid[i][j]!='2')
    {
        grid[i][j]='2';
        ok++;
        dfs(i,j-1,grid);
        dfs(i,j+1,grid);
        dfs(i-1,j,grid);
        dfs(i+1,j,grid);

    }
    else if(grid[i][j]=='2' || grid[i][j]=='0')
    {
        return;
    }
}

int main()
{
    vector<vector<char>>grid = {{'1','0','0','1','0'},{'1','0','0','1','0'},{'1','0','0','0','0'},{'0','0','0','0','0'}};
    n=grid.size();
    m=grid[0].size();
    int call=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        { ok=0;
            if(grid[i][j]=='1' && grid[i][j]!='2')
            {

                dfs(i,j,grid);cout<<ok<<endl;
                call++;

            }

        }
    }


}
