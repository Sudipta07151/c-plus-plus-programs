#include <iostream>
using namespace std;

class Base
{
public:
    int x;
    void show()
    {
        cout<<"x: "<<x<<endl;
    }
};

class Derived:public Base
{
    public:
    int y; 
    int x;
    void display()
    {
        cout<<"x: "<<x<<" y: "<<y<<endl;
    }
};

int main()
{
    Base b;
    b.x=25;
    b.show();
    Derived d;
    d.x=10;
    d.y=99;
    d.show();
    d.display();
    return 0;
}