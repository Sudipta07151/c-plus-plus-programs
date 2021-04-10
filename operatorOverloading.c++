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
    void addComplex1(Complex obj)
    {
        this->real += +obj.real;
        this->img += obj.img;
    }
    Complex addComplex2(Complex obj)
    {
        Complex objNew;
        objNew.real += this->real + obj.real;
        objNew.img += this->img + obj.img;
        return objNew;
    }
    Complex operator+(Complex obj)
    {
        Complex objNew;
        objNew.real += this->real + obj.real;
        objNew.img += this->img + obj.img;
        return objNew;
    }
};

int main()
{
    Complex obj1(3, 5);
    Complex obj2(3, -5);
    obj1.Display();
    obj2.Display();
    cout << "After Addition using addComplex: ";
    obj1.addComplex1(obj2);
    obj1.Display();
    cout << "After Addition using addComplex2: ";
    Complex obj3;
    obj3 = obj1.addComplex2(obj2);
    obj3.Display();
    cout << "After Addition using addComplex3: ";
    obj3 = obj3 + obj2;
    obj3.Display();
    return 0;
}