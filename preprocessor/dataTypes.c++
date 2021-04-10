/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<climits>
#include<cstdlib>
using namespace std;
#define chnToString(x) #x

int age=20;
int main()
{
    int age{0};
    age+=::age;
    ::age++;
    age;
    cout<<"Running"<<endl;
    cout<<::age<<"   "<<age<<endl;
    int arr[5];
    cout<<sizeof(arr)<<endl; 
    cout<<CHAR_MAX<<endl;
    cout<<CHAR_MIN<<endl;
    cout<<INT_MAX<<endl;
    cout<<INT_MIN<<endl;
    char str[]=chnToString(123);
    char newStr[]="SUDIPTA";
    cout<<newStr<<endl;
    cout<<str[1];
    return 0;
}
