#include <iostream>
#include <string>
using namespace std;

class CountCheck
{
private:
    int score;
    string cname;
    int countFlag;
public:
    static int count;
    CountCheck(int val,string name)
    {
        score=val;
        cname=name;
        countFlag=++count;
    }
    void display()
    {
        cout<<"CLASS NAME: "<<cname<<"SCORE: "<<score<<"COUNT "<<countFlag<<endl;
    }
    static void incCount()
    {
        count++;
        cout<<"COUNT NOW: "<<count;
    }
};
int CountCheck::count=0; 
int main()
{
    CountCheck obj1(300,"CLASS1");
    obj1.display();
    CountCheck obj2(267,"CLASS2");
    obj2.display();
    CountCheck obj3(254,"CLASS3");
    obj3.display();
    cout<<CountCheck::count<<endl;
    CountCheck::incCount();
}