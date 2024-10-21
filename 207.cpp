#include<bits/stdc++.h>

using namespace std;

bool dfs(int val,bool visit[],bool path[],vector<int>ar[])
{
    visit[val]=true;
    path[val]=true;

    for(int i=0; i<ar[val].size(); i++)
    {
        int next = ar[val][i];
        //cout<<next<<endl;
        if(!visit[next])
        {
            if(dfs(next,visit,path,ar))
            {
                return true;
            }
            else
            {
                continue;
            }
        }
        else if(visit[next]==true && path[next]==true)
        {
            return true;
        }
    }
    path[val]=false;
    return false;
}

bool canFinish(int num, vector<vector<int>>& pre)
{
    bool visited[num]= {false};
    bool path[num]= {false};

    vector<int>graph[num];
    //cout<<pre.size()<<endl;

    for(int i=0; i<pre.size(); i++)
    {
        int b=pre[i][1];
        int a=pre[i][0];
        graph[b].push_back(a);
    }

    for(int j=0; j<num; j++)
    {
        if(!visited[j])
        {
            if(dfs(j,visited,path,graph))
            {
                return true;
                break;
            }
        }
        else
            continue;
    }
    return false;


}

int main()
{
    int c=6;
    bool ok;
    //cin>>c;
    vector<vector<int>>vec;
    for(int i=0; i<5; i++)
    {
        int a,b;
        vector<int>v;
        cin>>a>>b;
        v.push_back(a);
        v.push_back(b);
        vec.push_back(v);

    }
    ok=canFinish(c,vec);
    cout<<ok<<endl;


}
