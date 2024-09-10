#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s =  "121P121";
    vector<char>v;
    vector<char>v1;
    for(int i=0,j=(s.size()-1); i<s.size(); i++)
    {

        if(int(s[i])>=65 && int(s[i])<=90)
        {
           v.push_back(char(int(s[i])+32));
        }
        else if((int(s[i])>=97 && int(s[i])<=122) || (int(s[i])>=48 && int(s[i])<=57))
        {

            v.push_back(s[i]);
        }
    }
    v1=v;
    reverse(v.begin(),v.end());
    if(v1==v)
    {
        cout<<"IT IS"<<endl;
    }
    else{
        cout<<"it's not"<<endl;
    }//



}
