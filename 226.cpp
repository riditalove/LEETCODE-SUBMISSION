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
    cout<<"ENTER THE DATA YOU WANT"<<endl;
    cin>>data;

    if(data==-1)
    {
        return NULL;
    }
    else
    {
        node* root = new node(data);
        cout<<"ENTERING THE DATA FOR THE LEFT OF "<<data<<endl;
        root->left = buildTree(root->left);
        cout<<"ENTERING THE DATA FOR THE RIGHT OF "<<data<<endl;
        root->right = buildTree(root->right);


        return root;
    }

}

void invert(node* &root)
{
    node* tr = root;
    if(tr==NULL)
    {
        return;
    }
    else
    {
        node* left = tr->left;
        node* right = tr->right;
        root->left = right;
        root->right = left;
        invert(left);
        invert(right);



    }
}

void print(node* &root)
{
    queue<node*>q;
    q.push(root);

    while(!q.empty())
    {
        node* temp = q.front();
        if(temp!=NULL)
        {
            cout<<temp->data<<endl;
            q.pop();
            q.push(temp->left);
            q.push(temp->right);
        }
        else
        {
            q.pop();
        }
    }
}

int main()
{
    node* root = NULL;
    root = buildTree(root);
    invert(root);
    print(root);


}

//4 2 1 -1 -1 3 -1 -1 7 6 -1 -1 -1
