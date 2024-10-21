#include<bits/stdc++.h>

using namespace std;

class node
{
public:
    int val;
    node* prev;
    node* next;

    node()
    {
        next=NULL;
        prev = NULL;
    }
    node(int v)
    {
        val = v;
        prev=NULL;
        next=NULL;
    }
    ~node()
    {
        if(this->next != NULL)
        {
            this->next = NULL;
            delete next;
        }
    }
};

node* head = new node();
node* tail = new node();
node* h1;

void initilization()
{
    h1 = tail;
}

node* insertion(int val)
{
    node* cur = new node(val);
    head->next = cur;
    cur->prev = head;
    cur->next=h1;
    h1->prev = cur;
    h1=cur;
 //   cout<<"H1 er value<<"<<h1->val<<endl;
    return h1;

}

void deletion(node* &del)
{
    (del->prev)->next = del->next ;
    (del->next)->prev = del->prev;
    del->next = NULL;

    delete del;
}


class LRUCache
{
public:
    map<int,node*>m;
    int capac;
    LRUCache(int capacity)
    {

        capac = capacity;
        initilization();

    }

    int get(int key)
    {
        node* ins = m[key];
        if(ins==NULL)
        {
            return -1;
        }
        else
        {
            int a = ins->val;

            node* yo;
            m.erase(key);
         //   cout<<"MAP SIZE "<<m.size()<<endl;
            deletion(ins);
            yo=insertion(a);
            m[key]=yo;
            return a;
        }

    }

    void put(int key, int value)
    {
        //cout<<"PUT ER VIROTR MAP SIZE "<<m.size()<<endl;
        if(capac<=m.size())
        {
           // cout<<"KEY  "<<key<<endl;
           // cout<<"VAL "<<value<<endl;
            node* temp = tail->prev;
          //  cout<<"LAST ER AAGER VLUR "<<temp->val<<endl;
            node* ok;
            m.erase(temp->val);
            deletion(temp);
            ok = insertion(key);

            m[key] = ok;

        }
        else
        {
            node* ko;
            ko=insertion(value);

            m[key]=ko;
        }

    }
};

int main()
{
    LRUCache* lRUCache = new LRUCache(1);
    lRUCache->put(2,1);

    cout<<lRUCache->get(2)<<endl;
   // lRUCache->put(3,3);
   // cout<<lRUCache->get(2)<<endl;
   // lRUCache->put(4,4);
   // cout<<lRUCache->get(1)<<endl;   // return -1 (not found)
   // cout<<lRUCache->get(3)<<endl;    // return 3
   // cout<<lRUCache->get(4)<<endl;


}
