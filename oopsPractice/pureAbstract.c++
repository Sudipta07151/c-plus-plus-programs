 #include<iostream>
 #include<vector>
 #include<string>
 #include<map>
 using namespace std;
class Parent{
public:
Parent()
{
  cout<<"Parent constructor called"<<endl;
}
void displayParent()
{
  cout<<"PARENT CLASS"<<endl;
}
virtual void display()=0;
};

class ChildA:public Parent{
public:
ChildA()
{
  cout<<"Child constructor called"<<endl;
}
void display()
{
  cout<<"child classA"<<endl;
}
};
class ChildB:public Parent{
public:
ChildB()
{
  cout<<"Child constructor called"<<endl;
}
void display()
{
  cout<<"child classB"<<endl;
}
};
 int main()
 {
   Parent *pObj=new ChildA();
   pObj->display();
    pObj=new ChildB();
    pObj->display();
    pObj->displayParent(); 
    return 0;
 }