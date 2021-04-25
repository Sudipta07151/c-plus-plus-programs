#include<iostream>
using namespace std;

int fibb(int n)
{
    if(n<=2)
    return 1;
    else
    return fibb(n-1)+fibb(n-2);
}
int main()
{
    int terms;
    cin>>terms;
    for(int i=1;i<=terms;i++)
        cout<<fibb(i)<<" ";
    return 0;
}