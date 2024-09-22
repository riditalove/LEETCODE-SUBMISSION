#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>v={2,7,11,15};
    int i=0;
    int j=(v.size())-1;
    int target = 9;
    vector<int>ans;
    while(i<j)
    {
        int total = v[i]+v[j];
        if(total == target)
        {
            ans.push_back(v[i]);
            ans.push_back(v[j]);
            break;
        }
        else if(total<target)
        {
            i++;
        }
        else if(total>target)
        {
            j--;
        }
    }





}
