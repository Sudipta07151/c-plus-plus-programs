#include <iostream>
#include <string>
using namespace std;

class A
{
public:
    A()
    {
        cout<<"A constructor called"<<endl;
    }
    void show()
    {
        cout<<"show from A called";
    }
};

class B:virtual public A
{
public:
    B()
    {
        cout<<"B constructor called"<<endl;
    }
};

class C:virtual public A
{
public:
    C()
    {
        cout<<"C constructor called"<<endl;
    }
};
class D:public B,public C
{
public:
    D()
    {
        cout<<"C constructor called"<<endl;
    }
};

int main()
{
    cout<<endl;
    A aObj;
    cout<<endl;
    B bObj;
    cout<<endl;
    C cObj;
    cout<<endl;
    D dObj;
    dObj.show();
    return 0;
}
