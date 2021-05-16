// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;

int main() {
    string str;
    cout<<"ENTER MAIN STRING:";
    getline(cin,str);
    string sub_str;
    cout<<"ENTER SUB STRING:";
    getline(cin,sub_str);
    size_t pos;
    while((pos=str.find(sub_str))!=string::npos)
    {
        str.erase(pos,sub_str.size());
    }
    cout<<str.size();
    return 0;
}
