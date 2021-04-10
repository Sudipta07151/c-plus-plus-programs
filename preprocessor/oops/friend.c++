#include <iostream>
using namespace std;

class yourClass;
class My
{
private:
    int a;

protected:
    int b;

public:
    int c;
    friend void func();
    friend yourClass;
};

void func()
{
    My t;
    t.a = 19;
    t.b = 15;
    t.c = 10;
    cout << t.a<<endl;
}
class yourClass
{
    My m;

public:
    void func()
    {
        m.a = 99;
        cout << m.a<<endl;
    };
};
int main()
{
    func();
    yourClass yc;
    yc.func();
    return 0;
}