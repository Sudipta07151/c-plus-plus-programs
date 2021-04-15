#include <iostream>
using namespace std;
#define PI 3.1415

int main()
{
    float r;
    while (1)
    {
        cout << "enter r";
        cin >> r;
        if(r<=20 || r>=30)
        {
            cout<<"WRONG DISPLAY OUTPUT!"<<endl;
            continue;
        }
        cout<<(PI*r*r);
        break;
    }
}