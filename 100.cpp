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



void print(node* &root)
{
    queue<node*>q;
    q.push(root);
    while(!q.empty())
    {
        node* temp = q.front();
        q.pop();
        cout<<temp->data<<endl;
        if(temp->left)
        {
            q.push(temp->left);
        }
        if(temp->right)
        {
            q.push(temp->right);
        }
    }


}

bool isSame(node* root, node* root1)
{
    queue<node*>q;
    queue<node*>q1;
    q.push(root);
    q1.push(root1);
    while(!q.empty() && !q1.empty())
    {
        node* temp = q.front();
        node* temp1 = q1.front();
        q.pop();
        q1.pop();
        if((temp==NULL && temp1!=NULL)||(temp!=NULL && temp1==NULL))
        {
            return false;
        }
        if(temp->data == temp1->data)
        {
            cout<<"1st "<<temp->data<<endl;
            cout<<"2nd "<<temp1->data<<endl;
            if(temp->left || temp1->left)
            {
                q.push(temp->left);
                q1.push(temp1->left);
            }
            if(temp->right || temp1->right)
            {
                q.push(temp->right);
                q1.push(temp1->right);
            }
        }
        else
        {
            cout<<"NOT MATCH"<<endl;
            return false;
        }
    }


    return true;
}

int main()
{
    node* root = NULL;
    root = buildTree(root);
    // invert(root);
    node* root1 = NULL;
    root1 = buildTree(root1);
    //
    //cout<<endl;
    //print(root);
    //cout<<endl;
    //print(root1);
    cout<<isSame(root,root1)<<endl;


}

//4 2 1 -1 -1 3 -1 -1 7 6 -1 -1 -1
//4 2 1 -1 -1 6 -1 -1 7 6 -1 -1 9 -1 -1
