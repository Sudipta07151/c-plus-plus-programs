#include <iostream>
#include <fstream>
#include<string>
using namespace std;
int main()
{
    // ofstream outfile("my.txt");
    // // ofstream outfile("my.txt",ios::app);
    // // ofstream outfile("my.txt",ios::trunc);
    // outfile<<"SUDIPTA"<<endl;
    // outfile<<23<<endl;
    // outfile.close();
    ifstream infile;
    infile.open("my.txt");
    if (!infile.is_open())
    {
        cout << "NO SUCH FILE";
    }
    else
    {
        string str;
        int num;
        infile>>str;
        infile>>num;
        cout<<str<<num;
    }
    if(infile.eof())
    {
        cout<<"END OF FILE";
        infile.close();
    }
}