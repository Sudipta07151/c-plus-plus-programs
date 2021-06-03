#include<iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}

int *bubbleSort(int arr[],int n)
{
    cout<<"BUBBLE SORT"<<endl;
    for(int i=0;i<n-1;i++)
    {
        int flag=0;
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                flag=1;
            }
        }
        if(!flag)
        return arr;
    }
    return arr;
}

int *insertionSort(int arr[],int n)
{
    cout<<"INSERTION SORT"<<endl;
    for(int i=1;i<9;i++)
    {
        int x=arr[i];
        int j=i-1;
        while(arr[j]>x && j!=-1)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=x;
    }
    return arr;
}

int *selectionSort(int arr[],int n)
{
    cout<<"SELECTION SORT"<<endl;
    for(int i=0;i<n;i++)
    {
        int j,k;
        for(j=k=i;j<n;j++)
        {
            if(arr[j]<arr[k])
            {
                k=j;
            }
        }
        swap(arr[i],arr[k]);
    }
    return arr;
}

int binSearch(int arr[],int data,int n)
{
    int l,h,m;
    l=0;
    h=n;
    while(l<=h)
    {
        m=(l+h)/2;
        if(arr[m]==data)
        return m;
        else if(data<arr[m])
        h=m-1;
        else if(data>arr[m])
        l=m+1;
    }
    return -1;
}

int recBinSearch(int arr[],int data,int l,int h)
{
    if(l<=h)
    {
        int m=(l+h)/2;
        if(arr[m]==data)
        return m;
        else if(data>arr[m])
        return recBinSearch(arr,data,m+1,h);
        else if(data<arr[m])
        return recBinSearch(arr,data,l,m-1);
    }
    return -1;
}
int main()
{
    int arr[]={121,45,212,231,34,14,15,23,90};
    int *ptr;        
    //ptr=bubbleSort(arr,9);
    //ptr=insertionSort(arr,9);
    ptr=selectionSort(arr,9);
    for(int i=0;i<9;i++)
    {
        cout<<ptr[i]<<endl;
    }
    // cout<<binSearch(arr,101,9);
    cout<<recBinSearch(arr,121,0,9);
    return 0;
}
