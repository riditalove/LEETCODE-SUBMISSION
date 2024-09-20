#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>v = {};
    map<int,int>m;
    map<int,int>::iterator mit;
    map<int,int>::iterator mip;
    int maxi = INT_MIN;

    int coun=0;
    for(int i=0;i<v.size();i++)
    {
        m[v[i]]++;
    }
    for(mit=m.begin();mit!=m.end();mit++)
    {
        mip = next(mit);
        int a,b;
        a=mit->first;
        b=mip->first;
        if((a+1)!=b)
        {
            coun = 0;
        }
        else{
            coun=coun+1;
            maxi = max(maxi,coun);
        }
    }
    if(maxi<=0)
    {
        return 0;
    }
    else{
        return maxi+1;
    }


}
