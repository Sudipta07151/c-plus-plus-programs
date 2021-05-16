// Online C++ compiler to run C++ program online
#include <iostream>
#include<memory>
#include<cmath>
using namespace std;
class Circle{
  private:
  float r;
  public:
  Circle(float radius){
      r=radius;
  }
  auto area(){
      return pow(r,2);
  }
};

int main() {
   unique_ptr<Circle>c(new Circle(7.6f));
   cout<<c->area()<<endl;
    unique_ptr<Circle> c2;
    c2=move(c);
    cout<<endl<<c2->area();
    Circle *ptr=new Circle(8.8f);
    cout<<endl<<ptr->area();
    // cout<<c->area()<<endl;
    return 0;
}
