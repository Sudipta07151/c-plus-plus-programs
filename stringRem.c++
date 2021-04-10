#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    string str2 = {""};
    cout << "ENTER STRING: ";
    getline(cin, str);
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '5' || str[i] == '6' || str[i] == '7')
        {
            if (str[i] == '7')
            {
                if (str[i + 1] == '5' && str[i + 2] == '6')
                    i+=2;
            }
            else if (str[i] == '5' && str[i + 1] == '6')
            {
                i++;
            }
            else{
                str2+=str[i];    
            }
        }
        else{
            str2+=str[i];
        }
    }
    cout << str2;
}