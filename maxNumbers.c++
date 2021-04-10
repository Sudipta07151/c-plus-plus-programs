#include<iostream>
#include<cmath>
using namespace std;


int maxNumbers(int arr[],int size)
{
    int maxDiff=arr[0]-arr[1];
    for(int i=1;i<size-1;i++)
    {
        if(maxDiff<(arr[i]-arr[i+1]))
        {
            maxDiff=(arr[i]-arr[i+1]);
        }
        cout<<maxDiff<<endl;
    }
    return maxDiff;
}

int main()
{
    int n;
    cout<<"ENTER NUMBER OF ELEMENTS:";
    cin>>n;
    cout<<abs(l);
    int arr[n];
    int i=0;
    while(i<n)
    {
        cin>>arr[i];
        i++;
    }
   cout<<maxNumbers(arr,n);
    return 0;
}