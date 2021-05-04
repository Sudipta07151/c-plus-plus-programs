#include<iostream>
using namespace std;

int main()
{
    int num;
    cin>>num;
    try
    {
        if(num==0)
            throw 400;
        cout<<100/num;
    }
    catch(int err)
    {
        cout<<"division by zero error: "<<err;
    }
    cout<<endl<<"WILL RUN ALWAYS";
    return 0;
}