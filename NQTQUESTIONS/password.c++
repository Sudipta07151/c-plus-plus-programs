#include <iostream>
#include<string>
using namespace std;

int validate(string str)
{
    int caps=0,num=0;
    for(int i=0;str[i];i++){
   if(str.size()<4)
   {
       return 0;
   }
   else if(str[0]>=48 && str[0]<=57)
   {
       return 0;
   }
   else if(str[i]==' ' || str[i]=='/')
   {
=       return 0;
   }
   else if(str[i]>=65 && str[i]<=90)
   {
=       caps=1;
   }
   else if(str[i]>=48 && str[i]<=57)
   {
=       num=1;
   }     
    }   
   if(caps && num)
   return 1;
   else
   return 0;
}
int main()
{
    string str;
    getline(cin,str);
    if(validate(str)){
     cout<<1;   
    }
    else{
        cout<<0;
    }
    return 0;
}
