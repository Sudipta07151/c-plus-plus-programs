#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cout<<"ENTER STRING: ";
    getline(cin,str);
    for(int i=0;i<str.length();i++)
    {
        str[i]=97-((int)str[i])+122;
    }
    cout<<str;
}