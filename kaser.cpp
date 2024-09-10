#include<bits/stdc++.h>

using namespace std;

int main()
{
    int sum = 0;
    int ar[]= {-2,1,-3,4,-1,2,1,-5,4};
    int maxi = -99999;
    int current;
    for(int i=0; i<9; i++)
    {
        current = ar[i];
        if(sum<0)
        {
            sum = 0;
        }
        else
        {
            sum = sum;
        }
        sum = sum + current;
        maxi = max(maxi,sum);

    }
    cout<<maxi<<endl;
}
