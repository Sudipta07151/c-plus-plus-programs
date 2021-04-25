#include <iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    int c=0,index;
    string str,store;
    vector <string> names;
    cin>>str;
    c++;
    names.push_back(str);
    str.clear();
    cin>>str;
    if(str.at(0)=='Y')
    {
        str.clear();
        cin>>str;
        for(int i=0;str[i];i++)
        {
            if(str.at(i)==',')
            {
                index=i+1;
                c++;
                names.push_back(store);
                store.clear();
            }
            else
            {
                store+=str.at(i);       
            }
    }
    names.push_back(str.substr(index,str.size()-1));
    }
    else
    {
        cout<<"TOTAL MEMBERS: "<<c<<endl;
        cout<<names.at(0)<<0.05*5000;
        return 0; 
    }
    c++;
    cout<<"TOTAL MEMBERS: "<<c<<endl;
    for(int i=0;i<names.size();i++)
    {
        if(i==0){
        cout<<names.at(i);
        cout<<(0.10*5000)*(names.size()-1)<<endl;
            
        }
        else{
            cout<<names.at(i)<<":";
            cout<<0.05*5000<<endl;
        }
    }
}

