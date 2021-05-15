// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Complex{
  private:
  int real;
  int ima;
  public:
  Complex(int real=0,int ima=0)
  {
      this->real=real;
      this->ima=ima;
  }
  Complex add(Complex obj_Passed)
  {
      Complex temp;
      temp.real=this->real+obj_Passed.real;
      temp.ima=this->ima+obj_Passed.ima;
      return temp;
  }
  Complex operator-(Complex obj_Passed)
  {
      Complex temp;
      temp.real=this->real-obj_Passed.real;
      temp.ima=this->ima-obj_Passed.ima;
      return temp;
  }
  void display(char ch=' ')
  {
      switch(ch){
          case '+':cout<<"ADDITION PERFOREMD"<<endl;break;
          case '-':cout<<"SUBTRACTION PERFOREMD"<<endl;break;
      }
    cout<<"real:"<<this->real<<"img:"<<this->ima<<endl;    
  }
 friend Complex operator*(Complex,Complex);
};

Complex operator*(Complex obj1,Complex obj2)
{
    Complex temp;
    temp.real=obj1.real*obj2.real;
    temp.ima=obj1.ima*obj2.ima;
      return temp;
}

int main() {
    
    Complex obj1(20,7);
    Complex obj2(3,5);
    obj1.display();
    obj2.display();
    Complex temp=obj1.add(obj2);
    temp.display('+');
    temp=obj1-obj2;
    temp.display('-');
    temp=obj1*obj2;
    temp.display();
    return 0;
}
