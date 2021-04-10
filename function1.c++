#include <iostream>
using namespace std;
#include<string>  
int add(int x)
{
    cout << "add 1 parameter" << endl;
    return x;
}
int add(int x, int y)
{
    cout << "add 2 parameters" << endl;
    return x + y;
}
int add(int x, int y, int z)
{
    cout << "add 3 parameters" << endl;
    return x + y + z;
}
float add(float x, float y)
{
    cout << "add float parameters" << endl;
    return x+y;
}

// int max(int a ,int b, int c){
//     return a>b?(a>c?a:c):(b>c?b:c);
// }

int max(int a ,int b, int c=0){
    return a>b?(a>c?a:c):(b>c?b:c);
}

//TEMPLATE FUNCTIONS
template <class T>
T add2num(T x,T y)
{
    return x+y;
}

int main()
{
    cout << add(3, 5)<<" "<<endl;
    cout << add(3, 5, 3)<<" "<<endl;
    cout << add(3)<<" "<<endl;
    cout<<add(2.5f,1.6f)<<endl;
    cout<<add2num(string{"Sudipta"},string{"Adak"})<<endl;
    cout<<add2num(3.3f,5.5f)<<endl;
    cout<<max(15,7,12)<<endl;
    cout<<max(5,6)<<endl; 
    return 0;
}