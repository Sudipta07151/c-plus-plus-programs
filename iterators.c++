#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;

int main()
{
    vector<string>names{"sudipta","ruii","kin"};
    vector<int>numbers{99,98,97,96,23,56,76,90};
    string brand;
    map<string,string>players{
        {"MORGAN","BATSMAN"},
        {"RUSSELL","ALL_ROUNDER"},
        {"RANA","BATSMAN"},
        {"HARBJAHAN","BOWLER"}
    };
    cout<<"ENTER STRING: ";
    getline(cin,brand);
    vector<string>::iterator itr;
    string::iterator str;
    vector<int>::reverse_iterator rntr;
    map<string,string>::iterator mptr;
    for(itr=names.begin();itr!=names.end();itr++){
        cout<<*itr<<"\n";
    }
    for(str=brand.begin();str!=brand.end();str++)
    {
        cout<<*str<<" ";
    }
    cout<<endl;
    for(rntr=numbers.rbegin();rntr!=numbers.rend();rntr++)
    {
        cout<<*rntr<<" ";
    }
    for(mptr=players.begin();mptr!=players.end();mptr++)
    {
        cout<<mptr->first<<" "<<mptr->second<<" "<<endl;
    }
    for(auto vptr=numbers.begin()+2;vptr!=numbers.end()-2;vptr++)
    {
        cout<<*vptr<<" ";
    }
    return 0;
}
