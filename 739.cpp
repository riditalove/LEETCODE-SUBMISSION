#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>v = {73,74,75,71,69,72,76,73};
    stack<int>st;
    int n=v.size();
    vector<int>arr(n,0);
    st.push(0);
    for(int j=1; j<n; j++)
    {
        while(v[st.top()]<v[j])
        {
            arr[st.top()]=j-(st.top());
            st.pop();
            if(st.size()==0)
            {
                break;
            }

        }
        st.push(j);
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }

}
