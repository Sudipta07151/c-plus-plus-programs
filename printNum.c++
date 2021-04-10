#include<iostream>
#include<string>
using namespace std;
int main()
{
    int num='A'/'A';
    string str="..........";
    for(int i=num; i<=(str.size()*str.size());i++)
    {
        cout<<i<<" ";
    }
    return 0;
}