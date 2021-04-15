/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int n,k,j,m,p;
    cout<<"NO OF TOTAL MONKEYS: ";
    cin>>n;
    cout<<"NO OF EATABLE BANANAS: ";
    cin>>k;
    cout<<"NO OF EATABLE PEANUTS: ";
    cin>>j;
    cout<<"TOTAL NO OF PEANUTS: ";
    cin>>m;
    cout<<"TOTAL NO OF BANANAS: ";
    cin>>p;
    if(m<=0 || n<=0 || k<=0 || j<=0)
    {
        cout<<"INVALID INPUT";
        return 0;
    }
    while(m>=0 || p>=0 )
    {
        if(p>k)
        {
            p-=k;
            n--;
        }
        else if(m>j)
        {
            m-=j;
            n--;
        }
        else{
            p-=k;
            m-=j;
            n--;
        }
    }
    cout<<n;
}

