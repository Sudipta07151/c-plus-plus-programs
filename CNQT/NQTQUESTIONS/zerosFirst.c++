#include <iostream>
using namespace std;

int main()
{
    int arr[]={0,1,0,1,0,0,1,1,1,0},c=0;
    for(int i=0;i<10;i++)
    {
        if(arr[i]==0)
        c++;
    }
    for(int i=0;i<10;i++)
    {
        if(c!=0)
        {
            arr[i]=0;
            c--;
        }
        else
        {
            arr[i]=1;
        }
    }
    for(int i=0;i<10;i++)
    cout<<" "<<arr[i];
}
