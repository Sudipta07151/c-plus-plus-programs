#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
    string str;
    cout<<"ENTER STRING: ";
    getline(cin,str);
    map<char,int>dublicate;
    for(int i;i<str.size();i++)
    {
        if(dublicate.empty())
        {
            dublicate.insert(make_pair(str[i],1));
        }
        else{
            auto it(dublicate.find(str[i]));
            if(it!=dublicate.end())
            {
                cout<<it->first;
                return 0;
            }
            else
            {
                dublicate.insert(make_pair(str[i],1));
            }
        }
    }
    return 0;
}
