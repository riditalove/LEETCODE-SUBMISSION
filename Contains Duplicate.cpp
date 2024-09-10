#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>v = {1,2,4,5};
    set<int>s(v.begin(),v.end());
    if(v.size() == s.size())
    {
        cout<<"size"<<endl;
    }
    else
    {
        cout<<"not SAME"<<endl;
    }

}
