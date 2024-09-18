#include<bits/stdc++.h>

using namespace std;

bool check(set<int>s,int si)
{
    if(s.size()==si)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string a="";
    int n = a.size();
    int i;
    int k=0;
    int j=0;
    int maxi = INT_MIN;
    while(j<n)
    {
        set<int>s;
        int i;
        int siz = j-k;
        for(i=k;i<=j;i++)
        {
            s.insert(a[i]);
        }
        if(check(s,(siz+1)))
        {
            j++;
            maxi = max(maxi,(siz+1));
            continue;
        }
        else
        {
            if(k==j)
            {
                j=k+1;
            }
            else
            {
                k++;
            }
        }
    }
    if(maxi<0)
    {
        retur
    }
    cout<<maxi<<endl;
}
