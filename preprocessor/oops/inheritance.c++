#include <iostream>
#include <string>
using namespace std;

class Base
{
private:
    int age;
    string name;

public:
    Base(string name, int age = 0)
    {
        this->name = name;
        this->age = age;
        cout << "OBJECT OF CLASS BASE CREATED" << endl;
    }
    void getName()
    {
        cout << "NAME : " << this->name << endl;
    }
    void incAge(int age = 0)
    {
        if (this->age == 0 && age == 0)
        {
            cout << "NO INITIAL AGE SET"
                 << "PLEASE PASS ON AN AGE TO SET AGE";
            return;
        }
        if (age != 0 && this->age == 0)
        {
            this->age = age;
            cout << "AGE SET SUCCESFULL" << endl;
            return;
        }
        this->age += 1;
    }
    int getAge()
    {
        return this->age;
    }
};
class Derived : public Base
{
private:
    string stream;

public:
    Derived(string name, int age, string stream)
        : Base(name, age)
    {
        this->stream = stream;
        cout << "OBJECT OF CLASS DERIVED CREATED" << endl;
    }
};

int main()
{
    Base obj("Sudipta");
    obj.getName();
    obj.incAge(23);
    obj.incAge();
    cout << obj.getAge() << endl;

    Derived dObj("Shrobona", 22, "BSc");
    dObj.getName();
    dObj.incAge();
    cout << dObj.getAge() << endl;
    return 0;
}