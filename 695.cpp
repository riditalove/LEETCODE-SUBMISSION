#include<bits/stdc++.h>

using namespace std;

int n=0;
int m=0;
int ok;
void dfs(int i,int j,vector<vector<int>>&v)
{

    if(i<0 || j>=m || j<0 || i>=n )
    {
        return;
    }
    else if(v[i][j]==0|| v[i][j]==2)
    {
        return;
    }
    v[i][j]=2;
    ok++;
    //cout<<ok<<endl;
    dfs(i,j+1,v);
    dfs(i,j-1,v);
    dfs(i-1,j,v);
    dfs(i+1,j,v);


}

int main()
{
    int maxi=INT_MIN;
    vector<vector<int>>grid= {{0,0,1,0,0,0,0,1,0,0,0,0,0},{0,0,0,0,0,0,0,1,1,1,0,0,0},{0,1,1,0,1,0,0,0,0,0,0,0,0},{0,1,0,0,1,1,0,0,1,0,1,0,0},{0,1,0,0,1,1,0,0,1,1,1,0,0},
    {0,0,0,0,0,0,0,0,0,0,1,0,0},{0,0,0,0,0,0,0,1,1,1,0,0,0},{0,0,0,0,0,0,0,1,1,0,0,0,0}};
    n=grid.size();
    m=grid[0].size();

    for(int i=0; i<n; i++)
    {

        for(int j=0; j<m; j++)
        {

            if(grid[i][j]==1)
            {
                ok=0;
                dfs(i,j,grid);
                maxi=max(maxi,ok);
            }

        }
    }
    cout<<maxi<<endl;
    // cout<<call<<endl;

}
