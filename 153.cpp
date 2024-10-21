#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>nums = {11,13,15,17};
    int n = nums.size();
    int start = 0;
    int en = n-1;
    while(start<=en)
    {
        int mid = start + (en-start)/2 ;
        if(mid == n-1)
        {
            cout<< nums[mid];
            break;
        }
        else if(mid==0)
        {
            cout<< nums[mid];
            break;
        }
        else if ( nums[mid]<nums[mid+1] && nums[mid]<nums[mid-1] )
        {
            cout<<nums[mid];
            break;
        }
        else
        {
            if (nums[mid]>nums[en])
            {
                start = mid+1;
            }
            else if (nums[mid]<nums[en])
            {
                en = mid-1;
            }
        }
    }
}
