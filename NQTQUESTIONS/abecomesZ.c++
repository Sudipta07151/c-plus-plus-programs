//a becomes z
//b becomes y

//input:campusmonk
//output:xznkfhnlmp


#include <iostream>
using namespace std;

int main()
{
    char str[100];
    cin.getline(str,100);
    for(int i=0;str[i];i++)
    {
        str[i]=123-(str[i]-96);
    }
    for(int i=0;str[i];i++)
    {
        cout<<str[i];
    }
}
