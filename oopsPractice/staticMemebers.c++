#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;

class Family
{
  private:
  static int membersCount;
  static map<int,string> members;
  public:
  Family(string name){
    members.insert(make_pair(membersCount++,name));
  }

  static void getMemebers()
  {
    for(auto iter=members.begin();iter!=members.end();iter++)
    {
      cout<<iter->first<<":"<<iter->second;
      cout<<endl;
    }
  }
};
int Family::membersCount=0;
map<int,string> Family::members;
int main()
{
  Family obj1("Chunnu"); 
  Family obj2("Goda"); 
  Family obj3("Vutki");
  Family::getMemebers();  
  return 0;
}