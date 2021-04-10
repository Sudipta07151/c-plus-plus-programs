#include <iostream>
#include<cmath>
using namespace std;

// #define num 10
// class Demo
// {
// private:
//     int x;
//     int y;

// public:
//     Demo(int x,int y)
//     {
//         this->x=x;
//         this->y=y;
//     }
//     void display() const
//     {
//         cout<<x<<" "<<" "<<y<<endl;
//     }
//     void incX(int ptr)
//     {
//         this->x+=ptr;
//     }
//     void incY(int ptr)
//     {
//         this->y+=ptr;
//     }
// };

void fun(int &x, const int &y)
{
    x+=23;
    // y-=231;
    // y=abs(y);
    cout << x << " " << y << endl;
}
int main()
{
    //const int x=10;
    // x++;
    // cout<<x;
    // int p=10;
    // const int *ptr=&p;
    // int const *ptr;
    //cout<<++*ptr;
    // int *const mtr;
    // int y=20;
    // mtr=&y;
    // cout<<*mtr;
    // mtr=&p;
    // int z=100;
    // const int *const ptr=&z;
    // cout<<*ptr;
    // Demo d(20,89);
    // d.display();
    // d.incX(88);
    // d.display();
    // d.incY(20);
    // d.display();
    int a=20,b=90;
    fun(a,b);
    return 0;
}