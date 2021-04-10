#include <iostream>
using namespace std;

class Car
{
public:
    virtual void start()
    {
        cout << "Car Started" << endl;
    }
    virtual void stop()
    {
        cout << "Car Stopped" << endl;
    }
};

class Innova : public Car
{
public:
    void start()
    {
        cout << "Innova Car Started" << endl;
    }
    void stop()
    {
        cout << "Innova Car Stopped" << endl;
    }
};

class Swift : public Car
{
public:
    void start()
    {
        cout << "Swift Car Started" << endl;
    }
    void stop()
    {
        cout << "Swift Car Stopped" << endl;
    }
};

int main()
{
    Car *c = new Innova;
    c->start();
    c->stop();
    c=new Swift;
    c->start();
    c->stop();
    return 0;
}