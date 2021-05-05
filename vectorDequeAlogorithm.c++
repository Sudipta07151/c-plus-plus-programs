#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include<deque>
#include <vector>
using namespace std;

int main()
{
  deque<int>dq; 
  int arr[5];
  for(int i=0;i<5;i++)
    cin>>arr[i];
  for(int i=0;i<5;i++)
  {
    if(arr[i]%2==0)
    {
      dq.push_back(arr[i]);
    }
    else
    {
      dq.push_front(arr[i]);
    }
  }
  cout<<"AFTER ENTERING"<<endl;
  for(auto iter=dq.begin();iter!=dq.end();iter++)
  {
    cout<<*iter<<" ";
  }
  cout<<endl;
  int cOdd=count_if(dq.begin(),dq.end(),[](int x){return x%2==0;});
  cout<<"ODD: "<<cOdd<<endl;
  sort(dq.begin(),dq.end(),greater<int>());
  cout<<"AFTER SORTING"<<endl;
  for(auto iter=dq.begin();iter!=dq.end();iter++)
  {
    cout<<*iter<<" ";
  }
  vector<string>names;
  vector<string>rep={"DRAVID","GOLA"};
  string str;
  cout<<endl<<"ENTER NAMES:"<<endl;
  for(int i=0;i<=5;i++)
  {
    getline(cin,str);
    names.push_back(str);
    str.clear();
  }
  cout<<"NAMES"<<endl;
  for(auto iter=names.begin();iter!=names.end();iter++)
  {
    cout<<*iter<<" ";
  }
  cout<<endl<<"REVERSE"<<endl;
  for(auto iter=names.rbegin();iter!=names.rend();iter++)
  {
    cout<<*iter<<" ";
  }
  cout<<endl<<"SORTING"<<endl;
  sort(names.begin(),names.end());
  for(auto iter=names.begin();iter!=names.end();iter++)
  {
    cout<<*iter<<" ";
  }
  auto findPtr=find(names.begin(),names.end(),"goda");
  if(findPtr!=names.end())
  {
    cout<<"FOUND..."<<endl;
    names.erase(findPtr);
    cout<<endl<<"DELETED"<<endl;
    names.insert(findPtr,rep.begin(),rep.end());
  }
  for(auto iter=names.begin();iter!=names.end();iter++)
  {
    cout<<*iter<<" ";
  }
  return 0;
}
