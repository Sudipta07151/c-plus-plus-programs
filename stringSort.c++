#include <iostream>
#include <string>
#include<vector>
using namespace std;
int main()
{
    string str,val="";
    int marker;
    vector<string> store;
    cout<<"ENTER STRING: ";
    getline(cin,str);
    for(int i=0; str[i]; i++)
    {
        if(str[i]!='.')
        {
            val+=str[i];
        }
        if(str[i]=='.')
        {
            marker=i;
            store.push_back(val);
            val="";
        }
    }
    store.push_back(str.substr(++marker));
    for(int i=0;i<store.size()-1;i++)
    {
        for(int j=0;j<store.size()-i-1;j++)
        {
            if(store[j]>store[j+1])
            {
                val=store[j];
                store[j]=store[j+1];
                store[j+1]=val;
            }
        }
    }
    for(auto element:store){
        cout<<element<<" ";
    }
    return 0;
}