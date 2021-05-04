#include <iostream>
using namespace std;

int prime(int num)
{
    for (int i = 2; i < num / 2; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int product(int num)
{
    int res = 1;
    while (num != 0)
    {
        res = res * (num % 10);
        num /= 10;
    }
    return res;
}

int main()
{
    int num;
    cin >> num;
    int c = 10;
    if (prime(num) && num >= 10)
    {
        cout << "NOT POSSIBLE";
    }
    else if (num < 10)
    {
        cout<<num+10;
    }
    else
    {
        while (1)
        {
            if (product(c) == num)
                break;
            c++;
        }
        cout << c;
    }
    return 0;
}
