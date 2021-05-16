// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

 float func()
{
    return 2.45; 
}
template<typename T>
void func(T var)
{
    cout<<endl<<"FROM TEMPLATED FUNCTION"<<endl;
  var();  
}

int main() 
{
    auto z=func();
    decltype(z) x=10;
    cout<<x+z;
    int val1=90,val2=89;
    //Lambda Expression
    [](){cout<<endl<<"HELLO FROM LAMBDA EXPRESSION";}();
    [](int x,char y){cout<<endl<<"SUM:"<<x+y;}(12,'A');
    char k=[](int x,char y){return x+y;}(12,'5');
    cout<<endl<<k;
    auto f=[&](){cout<<"LOCAL VARAIABLE ACCESSED  "<<val1<<"  "<<val2<<endl;};
    f();
    val1++;
    f();
    func(f);
    return 0;
}
