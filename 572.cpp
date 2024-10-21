#include<bits/stdc++.h>

using namespace std;

class node
{
public:
    int data;
    node* right;
    node* left;

    node(int d)
    {
        data = d;
        right=NULL;
        left=NULL;
    }
};




node* buildTree(node* &root)
{
    int data;
    //cout<<"ENTER THE DATA YOU WANT"<<endl;
    cin>>data;

    if(data==-1)
    {
        return NULL;
    }
    else
    {
        node* root = new node(data);
        //cout<<"ENTERING THE DATA FOR THE LEFT OF "<<data<<endl;
        root->left = buildTree(root->left);
        //cout<<"ENTERING THE DATA FOR THE RIGHT OF "<<data<<endl;
        root->right = buildTree(root->right);


        return root;
    }

}

bool isSame(node* &root, node* &root1)
{
    queue<node*>q1;
    queue<node*>q2;
    if(root!=NULL)
    {
        q1.push(root);
    }
    if(root1!=NULL)
    {
        q2.push(root1);
    }
    while(!q1.empty() && !q2.empty())
    {
        node* t1 = q1.front();
        node* t2 = q2.front();
        q1.pop();
        q2.pop();
        if((!t1 != !t2) || (t1->data!=t2->data))
        {
            return false;
        }
        else
        {
            if(t1->left || t2->left)
            {
                q1.push(t1->left);
                q2.push(t2->left);
            }
            if(t1->right || t2->right)
            {
                q1.push(t1->right);
                q2.push(t2->right);
            }


        }
    }
    return true;
}


bool print(node* &root, node* &subroot)
{
    queue<node*>q;

    int target = subroot->data;

    if(root!=NULL)
    {
        q.push(root);
    }

    while(!q.empty())
    {
        node* temp = q.front();
        q.pop();
        if(temp->data==target && isSame(temp,subroot))
        {
            return true;

        }
        else
        {
            q.push(temp->left);
            q.push(temp->right);
        }
    }
    return false;



}




int main()
{
    node* root = NULL;
    root = buildTree(root);
    // invert(root);
    node* root1 = NULL;
    root1 = buildTree(root1);
    //
    cout<<print(root,root1)<<endl;


}

//4 2 1 -1 -1 3 -1 -1 7 6 -1 -1 -1
//4 2 1 -1 -1 3 -1 -1 7 6 -1 -1 9 -1 -1
//7 6 -1 -1 9 -1 -1
//3 4 1 -1 -1 2 -1 -1 5 -1 -1
//4 1 -1 -1 2 -1 -1
