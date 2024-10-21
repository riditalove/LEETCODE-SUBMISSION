#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>v= {1};
    priority_queue<int>pq;
    for(int i=0; i<v.size(); i++)
    {
        pq.push(v[i]);
    }
    while(1)
    {
        if(pq.size()<=1)
        {
            break;
        }
        else
        {
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();
            int c=a-b;
            pq.push(c);

        }

    }cout<<pq.top()<<endl;
}
