#include<bits/stdc++.h>

using namespace std;

int main()
{
    int r=0;
    int l=0;
    int k=2;
    int siz;
    string st="ABABCCCCCCCCCCHHCCCCCC";
    int arr[26]={0};
    int maxi1 = INT_MIN;
    while(r<st.size())
    {
        arr[st[r]-'A']++;
        int maxi = INT_MIN;
        for(int j=0;j<26;j++)
        {
            maxi=max(maxi,arr[j]);
        }
        siz = (r-l)+1;
        cout<<siz<<" "<<l<<" "<<r<<endl;
        int gap = siz-maxi;
        if(gap>k)
        {
            siz--;
            arr[st[l]-'A']--;
            l++;
        }
        maxi1=(maxi1,siz);
        r++;

    }
    cout<<maxi1<<endl;
}

