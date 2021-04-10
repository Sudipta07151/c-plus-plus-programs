#include <iostream>
#include <string>
using namespace std;

class Complex
{
private:
    int real;
    int img;

public:
    Complex(int real = 0, int img = 0)
    {
        this->real = real;
        this->img = img;
    }
    void Display()
    {
        if (this->real >= 0 && this->img >= 0)
            cout << this->real << " + " << this->img << "i" << endl;
        else
            cout << this->real << this->img << "i" << endl;
    }
    friend ostream &operator<<(ostream &o, Complex obj);
    friend Complex operator+(Complex obj1, Complex obj2);
};

Complex operator+(Complex obj1, Complex obj2)
{
    Complex temp;
    temp.real = obj1.real + obj2.real;
    temp.img = obj1.img + obj2.img;
    return temp;
}

ostream &operator<<(ostream &o, Complex obj)
{
    if (obj.real >= 0 && obj.img >= 0)
        o<< obj.real << " + " << obj.img << "i" << endl;
    else
        o<< obj.real << obj.img << "i" << endl;
    return o;
}

int main()
{
    Complex obj1(3, 25);
    Complex obj2(7, -15);
    Complex obj3;
    obj1.Display();
    obj2.Display();
    cout << "After Addition using addComplex: ";
    obj3 = obj1 + obj2;
    obj3.Display();
    cout << "After Addition using cout<<: ";
    cout<<obj3;
    return 0;
}