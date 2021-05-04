#include <iostream>
#include <stack>
using namespace std;

void smallestNumber(int num)
{
    stack<int> stk;
    if (num > 0 && num <= 9)
    {
        cout << (num + 10);
        return;
    }
    for (int i = 9; i >= 2; i--)
    {
        while (num%i==0)
        {
                stk.push(i);
                num = num / i;
        }
    }
    if (num != 1)
    {
        cout << "NOT POSSIBLE";
    }
    else
    {
        while (!stk.empty())
        {
            cout << stk.top();
            stk.pop();
        }
    }
}

int main()
{
    int n;
    cin>>n;
    smallestNumber(n);
    return 0;
}