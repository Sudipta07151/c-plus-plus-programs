/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<string>
using namespace std;


int main()
{
    string str1,str2,str3;
    getline(cin,str1);
    getline(cin,str2);
    getline(cin,str3);
    for(char &v:str1)
    {
        if(v=='a'|| v=='e' || v=='i'|| v=='o' || v=='u')
        {
            v='%';
        }
    }
    for(char &v:str2)
    {
        if(v!='a'|| v!='e' || v!='i'|| v!='o' || v!='u')
        {
            v='#';
        }
    }
    for(char &v:str3)
    {
        if(v>=97 && v<=122)
        {
            v=(int)v-32;
        }
    }
    str1+=str2;
    str1+=str3;
    cout<<str1;
    return 0;
}
