#include <iostream>
using namespace std;

class Outer
{
public:
    int score;
    static int total;
    void fun()
    {
        i.display();
    }
    class Inner
    {
        public:
        void display()
        {
            cout<<"INNER CLASS DISPLAY"<<endl<<total;
        }
    };
    Inner i;
};
int Outer::total=0;

int main()
{
    Outer obj;
    obj.fun();
    return 0;
}