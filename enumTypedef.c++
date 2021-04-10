#include<iostream>
#include<string>
using namespace std;

enum day{mon,tue,wed,thu,fri,sat,sun};
enum feedback{poor=1,average,good,excellent};


struct Demo{
    int x;
    string str;
    void display(){
        cout<<"STRUCT FUNCTION CALLED "<<str<<" "<<x<<endl;
    }
};


class DemoClass{
   public:
    int x;
    string str={"CLASS SUDIPTA"};
    void display(){
        cout<<"CLASS FUNCTION CALLED "<<str<<" "<<x<<endl;
    }
};



int main()
{
    day d;
    feedback f;
    d=thu;
    f=poor;
    cout<<d<<endl;
    cout<<f<<endl;
    Demo dStruct;
    dStruct.str={"Sudipta"};
    dStruct.display();
    cout<<dStruct.str<<endl;

    DemoClass obj;
    obj.display();
}