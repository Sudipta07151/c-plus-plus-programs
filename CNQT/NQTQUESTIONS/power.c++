#include<iostream>
using namespace std;

int pow(int x,int y)
{
    if(y==0)
    return 1;
    else
    return x*pow(x,y-1);
}
int main()
{
    cout<<pow(4,3)<<endl;
     cout<<pow(5,4)<<endl;
     return 0;
}