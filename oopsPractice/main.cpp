#include <iostream>
using namespace std;

class Rectangle{

private:
    int l;
    int b;
public:
    Rectangle(){    //non parameterized constructor
        l=0;
        b=0;
    }
    Rectangle(int l,int b){    //non parameterized constructor
       setLength(l);
       setBreadth(b);
    }

    Rectangle(Rectangle &r){
        l=r.l;
        b=r.b;
    }
    void setLength(int length){
        if(length<0)
         l=0;
        else
         l=length;
    }
    void getLength(){
        cout<<l;
    }
    void setBreadth(int breadth){
       if(breadth<0)
        b=0;
       else
        b=breadth;
    }
    void getBreadth(){
        cout<<b;
    }
    int area(){
        return l*b;
    }
    int perimeter(){
        return 2*(l+b);
    }
};



int main()
{

//    Rectangle r1,r2;
//    r1.l=10;
//    r1.b=15;
//    cout<<"area: "<<r1.area()<<endl;
//    cout<<"perimeter: "<<r1.perimeter()<<endl;

//    Rectangle *ptr;
//    ptr=&r2;
//    ptr->l=5;
//    ptr->b=2;
//    int area=ptr->area();
//    cout<<"ptr area: "<<area<<endl;
//
//    Rectangle *p=new Rectangle;
//    p->l=10;
//    p->b=23;
//    cout<<p->area();

    Rectangle obj;
    obj.setBreadth(2);
    obj.setLength(3);
    cout<<obj.area()<<endl;
    cout<<obj.perimeter()<<endl;

    Rectangle obj2(obj);
    cout<<obj.area();
    return 0;
}
