#include <iostream>
using namespace std;

class Base
{
public:
    void start()
    {
        cout << "Car Started" << endl;
    }
    virtual void stop()=0;
};

class Derived : public Base
{
public:
    void stop()
    {
        cout << "Innova Car Stopped" << endl;
    }
};

int main()
{
    Base *c = new Derived;
    c->start();
    c->stop();
    return 0;
}