#include <iostream>
#include <cmath>
using namespace std;
#define PI 3.142;
#define SQR(x)(x*x)
#define MSG(x) #x
#ifndef PI
 #define PI 3.142;
#endif
#define MAX(a,b,c) (a>b?(a>c?a:c):(b>c?b:c))
int main()
{
    int a = 20, b = 90;
    cout<<PI;
    cout<<endl;
    cout<<SQR(3);
    cout<<endl;
    char ch[]={MSG(HELLO)};
    cout<<ch[0];
    cout<<endl;
    cout<<MAX(41,23,25);
    return 0;
}