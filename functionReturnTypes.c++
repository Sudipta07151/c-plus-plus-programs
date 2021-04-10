#include <iostream>
#include<string>
using namespace std;

int *fun(int size)
{
    int *p = new int[size];
    for (int i = 0; i < size; i++)
    {
        p[i] = i + 1;
    }
    return p;
}

int& funRef(int &a)
{
    return a;
} 
int main()
{
    int size;
    cout << "ENTER SIZE: ";
    cin >> size;
    int *ptr = fun(size);
    for (int i = 0; i < size; i++)
        cout << ptr[i] << " ";
    cout << endl;
    funRef(size)=25;
    cout<<size;
    string str={"sudipta"};
    string::iterator it;
    for(it=str.begin();it!=str.end();it++)
    {
        cout<<*it;
    }
    return 0;
}