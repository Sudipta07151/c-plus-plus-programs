#include <iostream>
using namespace std;

float division(int a, int b)
{
    int res=0;
    if (b==0)
        throw 400;
    return (float)a/ b;
}

int main()
{
    int num1,num2;
    cin >> num1;
    cin >> num2;
    try
    {   
        cout<<division(num1,num2);
    }
    catch (int err)
    {
        cout << "division by zero error: " << err;
    }
    cout << endl
         << "WILL RUN ALWAYS";
    return 0;
}