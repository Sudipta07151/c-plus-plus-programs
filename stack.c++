#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;
    stack<string> names;
    
    char ch = 'y';
    int val;
    string name;
    while (1)
    {
        cout << "ENTER n to exit";
        cin >> ch;
        if (ch == 'n')
            break;
        cout<<"INSERT VALUE TO BE PUSHED INTO STACK: ";
    //     cin>>val;
    //     s.push(val);
        cin.ignore();
        getline(cin,name);
        names.push(name);
    }
    while(!names.empty())
    {
        cout<<names.top()<<endl;
        names.pop();
    }
}