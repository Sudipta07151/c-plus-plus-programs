/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<cstring>
#include<cstdlib>
using namespace std;

int main()
{
    char name[]={"Sudipta"}, lastname[]={"Adak"}, fullname[20];
    cout<<name<<endl;
    cout<<strlen(name)<<endl;
    cout<<lastname<<endl;
    strcpy(fullname,name);
    strcat(fullname," ");
    strcat(fullname,lastname);
    cout<<fullname<<endl;
    cout<<"ENTER NAME: ";
    char myname[20]; 
    cin.getline(myname,20);
    cout<<myname<<endl;
    if(strcmp(fullname,myname)==0)
    {
        cout<<"SAME"<<endl;
    }
    else
    {
        cout<<"NOT SAME"<<endl;
    }
    for(size_t i=0;i<strlen(myname);i++)
    {
        cout<<myname[i]<<endl;
    }
    return 0;
}
