#include <iostream>
#include<string.h>
#include<stdio.h>
#include<map>
using namespace std;
int main()
{
    map<int,int> coins;
    char coins_str[100];
    cin.getline(coins_str,100);
    char *token=strtok(coins_str," ");
    while(token!=NULL)
    {
        int val=atoi(token);
        if(coins.count(val)==0)
            coins[val]=1;
        else
        {
            int n=coins.at(val);
            n++;
            coins[val]=n;
        }
            
        token = strtok(NULL," ");
    }
    auto it=coins.begin();
    for(it;it!=coins.end();it++)
    {
        //cout<<it->first<<"-"<<it->second<<endl;
        if(it->second%2!=0)
        cout<<it->first;
    }
    return 0;
}
