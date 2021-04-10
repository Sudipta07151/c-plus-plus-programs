#include<iostream>
#include<vector>
#include<list>
#include<map>
#include<string>

using namespace std;

int main()
{
    cout<<"VECTOR"<<endl;
    vector<int> v={1,99,20,19};
    int sum=0;
    for(auto val:v){
        sum+=val;
    }
    cout<<sum<<endl;

    //using iterator
    vector<int>::iterator itr;
    for(itr=v.begin();itr!=v.end();itr++){
        cout<<*itr<<endl;
    }
    cout<<"LIST"<<endl;
    list<int> l={1,99,20,19};
    sum=0;
    for(auto val:l){
         sum+=val;
    }
    cout<<sum<<endl;
    //using iterator
    list<int>::iterator ptr;
    for(ptr=l.begin();ptr!=l.end();ptr++){
        cout<<*ptr<<endl;
    }
    cout<<"MAP"<<endl;
    map<int,string> hashMap;
    hashMap.insert(pair<int,string>(1,"SUDIPTA"));
    hashMap.insert(pair<int,string>(2,"RAVI"));
    hashMap.insert(pair<int,string>(3,"ALOO"));
    map<int,string>::iterator mtr;
    for(mtr=hashMap.begin();mtr!=hashMap.end();mtr++){
        cout<<mtr->first<<" "<<mtr->second<<endl;
    }
    map<int,string>::iterator mtr1;
    mtr1=hashMap.find(4);
    if(mtr1==hashMap.end()){
        cout<<"valueFound"<<endl;
        cout<<mtr1->first<<mtr1->second;
    }else{
        cout<<"NOT FOUND";
    }
    return 0;
}