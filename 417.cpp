#include<bits/stdc++.h>

using namespace std;

void dfs(vector<vector<int>>&heights,int i,int j,int prev,bool ocean[201][201]){

    if(i<0 || j<0 || i>=heights.size() || j>=heights[0].size())
    {
        return;
    }
    if(ocean[i][j]==true)
    {
        return;
    }
    if(prev > heights[i][j])
    {
        return;
    }

    ocean[i][j]=true;
    dfs(heights,i+1,j,heights[i][j],ocean);
    dfs(heights,i-1,j,heights[i][j],ocean);
    dfs(heights,i,j+1,heights[i][j],ocean);
    dfs(heights,i,j-1,heights[i][j],ocean);
}

int main()
{
    vector<vector<int>>heights = {{1,2,2,3,5},{3,2,3,4,4},{2,4,5,3,1},{6,7,1,4,5},{5,1,1,2,4}};
    bool pacific[201][201]={false};
    bool atlantic[201][201]={false};
    for(int j=0; j<heights[0].size(); j++)
    {
         dfs(heights,0,j,INT_MIN,pacific);
         dfs(heights,(heights.size())-1,j,INT_MIN,atlantic);
    }
    for(int i=0; i<heights.size(); i++)
    {
       dfs(heights,i,0,INT_MIN,pacific);
       dfs(heights,i,(heights[0].size())-1,INT_MIN,atlantic);

    }
    for(int i=0;i<heights.size();i++)
    {
        for(int j=0;j<heights[i].size();j++)
        {
            if(pacific[i][j] && atlantic[i][j] == true)
            {
                cout<<i<<" "<<j;
                cout<<endl;
            }
        }
        cout<<endl;
    }



}
