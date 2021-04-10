#include<iostream>
#include<cstdlib>
using namespace std;

int main(int argc, char *argv[])
{
    int sum=0;
    cout<<"NAME OF PROGRAM: "<<argv[0]<<endl;
    if(argc==1)
    cout<<"NO COMMAND LINE ARGUMENTS PASSED"<<endl;
    else
    {
        for(int i=1;i<argc;i++)
        {   
            sum+=atoi(argv[i]);
        }
    }
    cout<<"SUM: "<<sum;
    return 0;
}