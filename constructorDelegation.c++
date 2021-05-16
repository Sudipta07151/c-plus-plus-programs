// Online C++ compiler to run C++ program online
#include <iostream>
#include<memory>
#include<cmath>
using namespace std;
class Circle{
  private:
  float r;
  float z=12.34f;
  public:
  Circle(float radius){
      r=radius;
  }
  Circle():Circle(1.0f)
  {}
  float getter()
  {
   return z;     
  }
  auto area(){
      return pow(r,2);
  } 
};

int main() {
    unique_ptr<Circle>c (new Circle);
    cout<<c->area();
    cout<<c->getter();
    return 0;
}
