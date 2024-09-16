#include<bits/stdc++.h>

using namespace std;

int main()
{
   typedef pair<int,int>P;
   int n=v.size();
   vector<int>main_ans;
   map<int,int>coun;
   for(int i=0;i<n;i++)
   {
       coun[v[i]]++;
   }
   priority_queue<P, vector<P>, greater<P>>ans;
   for( auto j:coun )
   {
      int freq = j.second;
      int value = j.first;
      ans.push({freq,value});
      if(ans.size()>k)
      {
          ans.pop();
      }

   }
   while(!ans.empty())
   {
       main_ans.push_back((ans.top()).second);
       ans.pop();
   }
   return main_ans;
}
