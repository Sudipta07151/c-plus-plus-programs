#include <iostream>
using namespace std;

int main()
{
    int num;
    int product = 1;
    cout << "ENTER NUMBER:";
    cin>>num;
    while (num > 0)
    {
        product *= num % 10;
        num /= 10;
    }
    cout<<product;
    return 0;
}
