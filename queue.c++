#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int> q;
    char ch;
    int val;
    while (1)
    {
        cout << "ENTER n to exit";
        cin >> ch;
        if (ch == 'n')
            break;
        cout<<"INSERT VALUE TO BE PUSHED INTO STACK: ";
        cin>>val;
        q.push(val);
    }
    while(!q.empty())
    {
        cout<<" at front: "<<q.front()<<" at back: "<<q.back();
        q.pop();
    }
    return 0;
}