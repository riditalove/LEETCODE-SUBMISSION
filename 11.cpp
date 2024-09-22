#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>v={1,8,6,100,70,120,8,3,7};
    int siz = v.size();
    int i=0;
    int j=siz-1;
    int maxi = INT_MIN;
    while(i<j)
    {
        maxi=max(maxi,(j-i)*min(v[i],v[j]));
        if(v[i]<v[j])
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    cout<<maxi<<endl;
}
