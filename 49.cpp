#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<string>str = {"eat","tea","tan","ate","nat","bat"};
    vector<string>str1;
    str1=str;
    map<string,vector<string>>m;
    vector<vector<string>>ans;
    for(int i=0;i<str.size();i++)
    {
        sort(str[i].begin(),str[i].end());
        m[str[i]].push_back(str1[i]);
    }

    for(auto i: m)
    {
        ans.push_back(i.second);
    }

   return ans;


}
