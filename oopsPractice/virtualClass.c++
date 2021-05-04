#include <iostream>
using namespace std;

class A
{
  private:
  int a;
  public:
  void showA()
  {
    cout<<"CLASS A"<<endl;
  }
};
class B:virtual public A
{
  private:
  int b;
  public:
  void showB()
  {
    cout<<"CLASS B"<<endl;
  }
};
class C:virtual public A
{
  private:
  int c;
  public:
  void showC()
  {
    cout<<"CLASS C"<<endl;
  }
};
class D:public B,public C
{
  private:
  int d;
  public:
  void showD()
  {
    cout<<"CLASS C"<<endl;
  }
};
int main() 
{
  D dObj;
  dObj.showA();
  A *aObj=new A();
  aObj->showA();
  A *basePtr=new C();
  basePtr->showA();
}