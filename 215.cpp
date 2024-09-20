#include<bits/stdc++.h>

using namespace std;

int main()
{
   vector<int>v={3,2,3,1,2,4,5,5,6};
   int k = 4;
   priority_queue<int>pq;
   for(int i=0;i<v.size();i++)
   {
       pq.push(v[i]);
   }
   while(k>1)
   {
       pq.pop();
       k--;
   }
   if(!pq.empty())
   {
       cout<<pq.top()<<endl;
   }
   else{
    cout<<0<<endl;
   }

}
