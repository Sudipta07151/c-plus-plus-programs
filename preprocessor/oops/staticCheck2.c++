#include<iostream>
using namespace std;

class Innova
{
    public:
    static float price;
    static unsigned int carsSold;
    Innova()
    {
        ++carsSold;
    } 
    static float discount(float val)
    {
        return price*(1-(val/100));
    }
};
float Innova::price=330000;
unsigned int Innova::carsSold=0;
int main()
{
    cout<<"PRICE OF INNOVA: "<<Innova::price<<endl;
    cout<<"AFTER 12% DISCOUNT: "<<Innova::discount(12);
    Innova obj1;
    Innova obj2;
    Innova obj3;
    cout<<endl<<"CARS SOLD: "<<Innova::carsSold;    
    return 0;
}
