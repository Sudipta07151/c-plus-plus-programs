/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int odd=0, even=0, term;
    cin>>term;
    for(int i=1;i<=term;i++)
    {
        if(i%2==0)
        {
            cout<<even<<" ";
            even++;
        }
        else
        {
                cout<<odd<<" ";
                odd+=2;
        }
    }
    return 0;
}
