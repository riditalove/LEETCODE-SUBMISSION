#include<bits/stdc++.h>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
};

class Solution
{
public:
    int count = 0;
    void counti(TreeNode* root,int maxi)
    {
        if(root==NULL)
        {
            return;
        }
        else
        {
            if(root->val>=maxi)
            {
                maxi = root->val;
                count++;
            }
            counti(root->left,maxi);
            counti(root->right,maxi);

        }

    }
    int goodNodes(TreeNode* root)
    {
        if(root==NULL)
        {
            return 0;
        }
        else
        {
            counti(root,root->val);
        }
        return count;


    }
};

int main()
{

}
