#include <iostream>
#include <math.h>
using namespace std;

class ARMSTRONG
{
private:
    int n1, n2;

public:
    ARMSTRONG(int n1, int n2)
    {
        if (n1 <= 0 || n2 <= 0)
        {
            cout << "WRONG INPUT"<<endl;
            return;
        }
        this->n1 = n1;
        this->n2 = n2;
    }
    int noOfDig(int num)
    {
        int c = 0;
        while (num != 0)
        {
            c++;
            num /= 10;
        }
        return c;
    }
    int cubeOfNum(int num)
    {
        int c = noOfDig(num);
        int result = 0;
        while (num != 0)
        {
            result += pow((num % 10), c);
            num/=10;
        }
        return result;
    }
    void checkArmstrong()
    {
        for (int i = n1; i < n2; i++)
        {
            if (cubeOfNum(i) == i)
                cout << i<<endl;
        }
    }
};
int main()
{
    ARMSTRONG obj1(100, 2000);
    ARMSTRONG obj2(-2, 200);
    obj1.checkArmstrong();
    obj2.checkArmstrong();
    return 0;
}