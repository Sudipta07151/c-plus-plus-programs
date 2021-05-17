/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<queue>
using namespace std;

class Node{
    public:
    Node *left;
    Node *right;
    int data;
};

class Tree
{
    public:
    Node *root;
    Tree(){
        root=NULL;
    }
    void CreateTree();
    void PreOrder(Node *);
};

void Tree::CreateTree(){
    Node *p,*t;
    int val;
    queue<Node *> q;
    root=new Node();
    cout<<"ENTER VALUE OF ROOT : ";
    cin>>val;
    root->data=val;
    q.push(root);
    while(!q.empty())
    {
        p=q.front();
        q.pop();
        cout<<"ENTER VALUE OF LEFT CHILD: ";
        cin>>val;
        if(val!=-1)
        {
            t=new Node;
            t->data=val;
            t->left=t->right=NULL;
            p->left=t;
            q.push(t);
        }
        cout<<"ENTER VALUE OF RIGHT CHILD: ";
        cin>>val;
        if(val!=-1)
        {
            t=new Node;
            t->data=val;
            t->left=t->right=NULL;
            p->right=t;
            q.push(t);
        }
    }
};

void Tree::PreOrder(Node *ptr)
{
    if(ptr!=NULL)
    {
        cout<<ptr->data;
        PreOrder(ptr->left);
        PreOrder(ptr->right);
    }
}
int main()
{
    Tree t;
    t.CreateTree();
    t.PreOrder(t.root);
    return 0;
}
