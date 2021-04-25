#include <iostream>
#include<string.h>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    vector<int> v1;
    vector<int> v2;
    int c1=0,c2=0;
    for(int i=0;i<n;i++)
    {
        int val=arr[i];
        if(v1.empty())
        {
            v1.push_back(val);
        }
        else if(v1.at(c1)<=val && v2.empty())
        {
            v1.push_back(val);
            c1++;
        }
        else
        {
            if(v2.empty())
            {
               v2.push_back(val); 
            }
            else if(v2.at(c2)<=val && !v1.empty())
            {
                v2.push_back(val);
                c2++;
            }
            else
            {
                if(v1.size()>v2.size())
                {
                    cout<<"YES";
                    v2.clear();
                    c2=0;
                }
                else{
                    cout<<"NO";
                    v1.clear();
                    c1=0;
                }
            }
        }
    }
    if(v1.size()>v2.size())
                {
                    cout<<"YES";
                    v2.clear();
                    c2=0;
                }
                else{
                    cout<<"NO";
                    v1.clear();
                    c1=0;
                }
    cout<<"v1"<<endl;
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1.at(i);
    }
    cout<<"v2"<<endl;
    for(int i=0;i<v2.size();i++)
    {
        cout<<v2.at(i);
    }
    return 0;
}
