#include<iostream>
using namespace std;
 
//call by address 
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void swapRef(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}

int main()
{
    int x=10, y=20;
    cout<<"BEFORE PASSING CALL BY ADD:"<<endl;
    cout<<x<<" ";
    cout<<y<<endl;
    cout<<"&x: "<<&x<<" &x: "<<&y<<endl;
    cout<<"AFTER PASSING CALL BY ADD:"<<endl;
    swap(&x,&y);
    cout<<x<<" ";
    cout<<y<<endl;
    int k=99, l=189; 
    cout<<"BEFORE PASSING CALL BY REF:"<<endl;
    cout<<"k: "<<k<<" l: "<<l<<endl;
    swapRef(k,l);
    cout<<"AFTER PASSING CALL BY REF:"<<endl;
    cout<<"k: "<<k<<" l: "<<l<<endl;
    return 0;
}