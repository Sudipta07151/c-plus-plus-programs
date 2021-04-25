#include <iostream>
using namespace std;

int hcf(int x,int y)
{
    if(x==0)
        return y;
    else
        return hcf(y%x,x);
        
}

int main()
{
    int n1,n2;
    cin>>n1;
    cin>>n2;
    cout<<hcf(n1,n2);
    return 0;
}
