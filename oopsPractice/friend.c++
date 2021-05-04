#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;

class Buchki;
class Goda
{
public:float height;
private:string name;
protected:int age;
friend void imGodaFriendFunc();
friend Buchki;
};
 
class Buchki
{
  private:
  string name;
  string relation;
  int age;
  public:
  Buchki()
  {
    name="Buchki";
    relation="Sister";
    age=1;
  }
  Goda obj;
  void showRelation()
  {
    obj.name="Goda";
    cout<<obj.name<<" is brother of "<<name;
  }
};
void imGodaFriendFunc()
{
  Goda obj;
  obj.height=2.2;
  obj.name="GODA";
  obj.age=12;
  cout<<obj.name<<" "<<obj.height<<" "<<obj.age<<" "<<endl;
}
int main()
{
  imGodaFriendFunc();
  Buchki obj;
  obj.showRelation();
  return 0;
}