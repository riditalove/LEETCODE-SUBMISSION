#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>prices = {10,9,6,7,11,2,20};
    int n = prices.size();
    int maxi = INT_MIN;
    int mini = prices[0];
    int current;
    int gap;
    for(int i=1;i<n;i++)
    {
        current = prices[i];
        gap = current-mini;
        mini = min(current,mini);
        maxi = max(gap,maxi);

    }
    if(maxi<0)
    {
        cout<<0<<endl;
    }
    else
        cout<<maxi<<endl;
}
