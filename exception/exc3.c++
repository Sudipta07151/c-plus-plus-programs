#include <iostream>
#include <string>
using namespace std;

class myException : public exception
{
public:
    const char *what(){
    return "division error";
    }  
};

float division(int a, int b)
{
    int res = 0;
    if (b == 0)
        // throw string("div by zero exception");
        throw myException();
    return (float)a / b;
}

int main() throw(myException)
{
    int num1, num2;
    cin >> num1;
    cin >> num2;
    try
    {
        cout << division(num1, num2);
    }
    // catch (string err)
    // {
    //     cout <<err;
    // }
    catch (myException e)
    {
        cout <<e.what();
    }
    cout << endl
         << "WILL RUN ALWAYS";
    return 0;
}