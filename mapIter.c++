#include <iostream>
#include <map>
using namespace std;

int main()
{
     map<string, string> player;
     char ch='y';
     string key,value;
     while(1)
     {
         cout<<"enter n to quit: ";
         cin>>ch;
         if(ch=='n')
             break;
         cout<<"ENTER KEY: ";
         cin>>key;
         cout<<"ENTER VALUE: ";
         cin>>value;
         player.insert(make_pair(key,value));
    }
    for(auto itr=player.begin();itr!=player.end();itr++){
        cout<<itr->first<<" "<<itr->second<<endl;
    // }
    map<string, string> players{
        {"MORGAN", "BATSMAN"},
        {"RUSSELL", "ALL_ROUNDER"},
        {"RANA", "BATSMAN"},
        {"HARBJAHAN", "BOWLER"}};
    players["CUMMINS"] = "BOWLER";
    for (auto itr = players.begin(); itr != players.end(); itr++)
    {
        cout << itr->first << " " << itr->second << endl;
    }
    if (players.find("CUMMIS") != players.end())
        cout << "FOUND" << endl;
    else
        cout << "NOT FOUND" << endl;
    int num = players.count("CUMINS");
    auto it = players.find("CUMMINS");
    if (it != players.end())
        players.erase(it);
    for (auto itr = players.begin(); itr != players.end(); itr++)
    {
        cout << itr->first << " " << itr->second << endl;
    }
    cout << num;
    return 0;
}

