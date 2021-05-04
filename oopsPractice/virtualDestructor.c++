#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;

class Parent
{
  public:
  Parent()
  {
    cout<<"PARENT CONSTRUCTOR"<<endl;
  }
  virtual ~Parent()
  {
    cout<<"PARENT DESTRUCTOR"<<endl;
  }
};
class Child:public Parent
{
  public:
  Child()
  {
    cout<<"Child CONSTRUCTOR"<<endl;
  }
  ~Child()
  {
    cout<<"Child DESTRUCTOR"<<endl;
  }
};

int main()
{
 //NORMAL CASE(stack object creation)
 //for constructor
 //constructor of base class then derived class
 //for destructor
 //destructor of derived class then base class
  //cout<<"STACK"<<endl;
  Child obj;
  //NORMAL CASE END
  //FOR HEAP
  cout<<endl<<"HEAP"<<endl;
  Parent *ptr=new Child();
  delete ptr;
  cout<<"HEAP END"<<endl;
  //only parent destructor deleted
  //to use child destructor also make parent destructor virtual
  return 0;
}