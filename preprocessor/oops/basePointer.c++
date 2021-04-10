#include <iostream>
using namespace std;

class Base
{
public:
    void fun1()
    {
        cout << "FUN1"<<endl;
    };
    void fun2()
    {
        cout << "FUN2"<<endl;
    };
    void fun3(){
        cout << "FUN3"<<endl;
    };
};

class Derived : public Base
{
public:
    void fun4()
    {
        cout << "FUN4"<<endl;
    };
    void fun5()
    {
        cout << "FUN4"<<endl;
    };
};

int main()
{
    Base b;
    b.fun1();
    Derived d;
    d.fun1();
    d.fun5();
    Base *bPtr=new Derived;
    bPtr->fun1();
    //derived class pointer base class object not allowed
    //Derived dPtr=new Base;
    return 0;
}