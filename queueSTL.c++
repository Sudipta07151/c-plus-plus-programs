#include<iostream>
#include<queue>
#include<string>
#include<cstring>
using namespace std;

int main()
{
  char *str;
  queue<int>stk;
  cin.getline(str,100);
  char *token=strtok(str," ");
  while(token!=NULL)
  {
    stk.push(atoi(token));
    token=strtok(NULL," ");
  }
  int sum=0;
  while(!stk.empty())
  {
    sum+=stk.front();
    cout<<stk.front()<<endl;
    stk.pop();
  }
  cout<<endl;
  while(!stk.empty())
  {
    cout<<stk.back()<<endl;
    stk.pop();
  }
  cout<<"SUM:"<<sum;
}
