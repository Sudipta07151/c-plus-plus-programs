// Remove the given word from a string - Write a program to remove the given word from the input string.
// If a substring is not present in the input string, 
// then print the input string as it is.



#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    char str1[100],str2[100],result[100]{};
    cin.getline(str1,100);
    cin.getline(str2,100);
    char *token=strtok(str1," ");
    while(token!=NULL)
    {
        if(strcmp(token,str2)==0)
        {
             token=strtok(NULL," ");
             continue;
        }
        else
        {
            strcat(result,token);
            strcat(result," ");
        }
        token=strtok(NULL," ");
    }
    cout<<result;
}
