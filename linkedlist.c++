/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
class Node{
    public:
    Node *next;
    int data;
};

int main()
{
    Node *t,*head,*ptr;
    int val,ch;
    t=new Node;
    cout<<"ENTER VALUE: ";
    cin>>val;
    t->data=val;
    t->next=NULL;
    head=t;
    cout<<"ENTER -1 to EXIT: ";
    cin>>ch;
    while(ch>=0)
    {
        cout<<"ENTER VALUE: ";
        cin>>val;
        if(head->next==NULL)
        {
            cout<<"HEAD"<<endl;
            t=new Node;
            head->next=t;
            t->data=val;
            t->next=NULL;
        }
        else
        {
            for(ptr=head;ptr->next!=NULL;ptr=ptr->next);
            t=new Node;
            ptr->next=t;
            t->data=val;
            t->next=NULL;
        }
            
        cout<<"ENTER -1 to EXIT: ";
        cin>>ch;
    }
    cout<<"INSERTION DONE"<<endl<<"NOW DISPLAYING"<<endl;
    for(ptr=head;ptr!=NULL;ptr=ptr->next)
    {
        cout<<ptr->data<<endl;
    }
    return 0;
}
