#include <iostream>
#include <cmath>
using namespace std;

namespace First
{
    void fun()
    {
        cout<<"FIRST FUN"<<endl;
    }
}

namespace Second
{
    void fun()
    {
        cout<<"SECOND FUN"<<endl;
    }
}

using namespace First;
int main()
{   
    fun();
    Second::fun();
    return 0;
}