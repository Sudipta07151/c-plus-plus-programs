#include<string>
#include<cstring>
#include<cmath>
void seventeenToDec(){
    string str;
    int store=0;
    int decimal=0;
    getline(cin,str);
    int l=str.size();
    for(char value: str){
        if(value>='0' && value<='9'){
            store=value-48;
        }
        else if(value>='A' && value<='Z'){
            store=value-55;
        }
        else if(value>='a' && value<='z'){
            store=value-87;
            cout<<store<<endl;
        }
        decimal+=store*pow(17,--l);
    }
    cout<<decimal;
}
