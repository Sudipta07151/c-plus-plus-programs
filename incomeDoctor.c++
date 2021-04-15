#include <iostream>
#include<string>
#include<vector>
#include<cstdlib>
using namespace std;

int calculate()
{
    int index=0,income{0};
    vector<int> vec;
    string input,store;
    getline(cin,input);
    for(int i=0;input[i];i++)
    {
        if(input.at(i)==' ')
        {
            index=i;
            vec.push_back(stoi(store));
            store.clear();
        }
        else
        {
            store+=input.at(i);
        }
    }
    vec.push_back(stoi(input.substr(index+1,input.size()-1)));
    for(auto val:vec)
    {
        if(val<17)
        income+=200;
        if(val>=17 && val<=40)
        income+=400;
        else if(val>40)
        income+=300;
        else
        income+=0;
    }
    return income;
}

int main()
{
    cout<<calculate();
    return 0;
}

