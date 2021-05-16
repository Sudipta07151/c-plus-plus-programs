// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
using namespace std;

class A{
    private:
    string s;
    public:
  A(string str)
  {
      s=str;
  }
  A():A("SHROBANA"){};
  virtual void display()
  {
      cout<<"COOL "<<s;
  }
};

class B:public A{
    private:
    int age;
    public:
    B(int a,string name)
    :A(name)
    {
        age=a;
    }
    B():B(22,"Anonymous"){};
    void display()
    {
      cout<<"Age "<<age;
    }
};

int main() 
{
    A *ptr=new B(23,"Shrobana");
    ptr->display();
    return 0;
}
