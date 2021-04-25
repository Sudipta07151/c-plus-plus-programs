#include <iostream>
using namespace std;

int product(int num)
{
    int res=1;
    while(num!=0)
    {
        res=res*(num%10);
        num/=10;
    }
    return res;
}
int main()
{
    int num;
    cin>>num;
    int c=10;
    while(1)
    {
        if(product(c)==num)
            break;
        c++;
    }
    cout<<c;
    return 0;
}
