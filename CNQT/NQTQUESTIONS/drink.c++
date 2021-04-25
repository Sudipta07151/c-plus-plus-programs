#include <iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    vector<string> Coffee={"Expresso Coffee","Cappuccino Coffee","Latte Coffee"};
    vector<string> Tea={"Plain Tea","Assam Tea","Ginger Tea","Cardamom Tea","Masala Tea","Lemon Tea","Green Tea","Organic Darjeeling Tea"};
    vector<string> Soups={"Hot and Sour Soup","Veg Corn Soup","Tomato Soup","Spicy Tomato Soup"};
    vector<string> Beverages={"Hot Chocolate Drink","Badam Drink","Badam Pista Drink"};
    char choice;
    int itemNo;
    cin>>choice;
    cin>>itemNo;
    cout<<"Welcome to CCD"<<endl;
    if(choice=='c'){
        if(itemNo<Coffee.size())
        cout<<"Enjoy your "<<Coffee.at(itemNo-1);
        else{
            cout<<"INVALID INPUT";
        }
    }
    if(choice=='t'){
        if(itemNo<Tea.size())
        cout<<"Enjoy your "<<Tea.at(itemNo-1);
        else{
            cout<<"INVALID INPUT";
        }
    }
    if(choice=='s'){
        if(itemNo<Soups.size())
        cout<<"Enjoy your "<<Soups.at(itemNo-1);
        else{
            cout<<"INVALID INPUT";
        }
    }
    if(choice=='b'){
        if(itemNo<Beverages.size())
        cout<<"Enjoy your "<<Beverages.at(itemNo-1);
        else{
            cout<<"INVALID INPUT";
        }
    }
    return 0;
}

