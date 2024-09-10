#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>v = {1,2,3,4,5};
    vector<int>left;
    vector<int>right;
    vector<int>fin;
    int mul_left = 1;
    int mul_right = 1;
    for(int i=0;i<v.size();i++)
    {
        mul_left = mul_left * v[i];
        left.push_back(mul_left);
    }
    for(int j=(v.size()-1);j>=0;j--)
    {
        mul_right = mul_right * v[j];
        right.push_back(mul_right);
    }
    reverse(right.begin(),right.end());
    fin.push_back(right[1]);
    for(int i=1;i<(v.size()-1);i++)
    {
        fin.push_back((right[i+1]*left[i-1]));
    }
    fin.push_back(left[(v.size())-2]);


}
