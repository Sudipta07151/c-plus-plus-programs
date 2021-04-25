/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
    string value;
    cin>>value;
    int c=0,result=0;
    for(int i=value.size()-1;i>=0;i--)
    {
        int val=0;
        switch(value[i])
        {
            case 'A':val=10;break;
            case 'B':val=11;break;
            case 'C':val=12;break;
            case 'D':val=13;break;
            case 'E':val=14;break;
            case 'F':val=15;break;
            case 'G':val=16;break;
            case 'a':val=10;break;
            case 'b':val=11;break;
            case 'c':val=12;break;
            case 'd':val=13;break;
            case 'e':val=14;break;
            case 'f':val=15;break;
            case 'g':val=16;break;
            default: val=value[i]-48;
        }
        result=result+(val*pow(17,c));
        c++;
    }
    cout<<result;
    return 0;
}
