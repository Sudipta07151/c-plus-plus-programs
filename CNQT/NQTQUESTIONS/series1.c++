/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<string>
#include<vector>
#include<cstdlib>
using namespace std;

int main()
{
    //0,0,7,6,14,12,21,18, 28 (find nth term)

    int terms,odd{0},even{0};
    cin>>terms;
    for(int i=1;i<=terms;i++)
    {
        if(i%2==0)
        {
            cout<<even<<" ";
            even+=6;
        }
        else
        {
            cout<<odd<<" ";
            odd+=7;
        }
    }
    return 0;
}

