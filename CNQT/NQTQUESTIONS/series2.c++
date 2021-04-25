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
#include<cmath>
using namespace std;

int main()
{
    //0,0,7,6,14,12,21,18, 28 (find nth term)

    int terms,odd{1},even{1},c=1;
    cin>>terms;
    cout<<1<<" "<<1<<" ";
    for(int i=3;i<=terms;i++)
    {
        if(i%2==0)
        {
            even=pow(3,c);
            cout<<even<<" ";
            c++;
        }
        else
        {
            odd*=2;
            cout<<odd<<" ";
        }
    }
    return 0;
}

