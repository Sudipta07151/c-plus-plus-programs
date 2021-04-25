#include <iostream>
using namespace std;

void swap(int &a,int &b) //pass by reference
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void insertionSort(int arr[],int n)
{
    display(arr,n);
    cout<<"INSERTION SORT";
    for(int i=1;i<n;i++)//n-1 passes---here i start from 1 and ends at n(so n-1);
    {
        int j=i-1;
        int val=arr[i];
        while(j>-1 && arr[j]>val)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=val;
    }
    display(arr,n);
}
void bubbleSort(int arr[],int n)
{
    display(arr,n);
    cout<<"BUBBLE SORT"<<endl;
    for(int i=0;i<n-1;i++)//n-1 passes
    {
        int flag=0;
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                flag=1;
                swap(arr[j],arr[j+1]);
            }
        }
        if(!flag)
        break;
    }
    display(arr,n);
}
void selectionSort(int arr[],int n)
{
    display(arr,n);
    int i,j,k;
    cout<<"SLECTION SORT"<<endl;
    for(i=0;i<n;i++)//n-1 passes
    {
        for(j=k=i;j<n;j++)
        {
            if(arr[j]<arr[k])
            {
                k=j;
            }
        }
        swap(arr[i],arr[k]);
    }
    display(arr,n);
}

int partition(int arr[],int l,int h)
{
    int pivot=arr[l];
    int i=l;
    int j=h;
    do
    {
        do{
            i++;
        }while(arr[i]<=pivot);
        do{
            j--;
        }while(arr[j]>pivot);
        if(i<j)
        {
            swap(arr[i],arr[j]);
        }
    }while(i<j);
    swap(arr[l],arr[j]);
    return j;
}

void quickSort(int arr[],int l,int h)
{
    int j;
    if(l<h)
    {
        j=partition(arr,l,h);
        quickSort(arr,l,j);
        quickSort(arr,j+1,h);
    }
}

int c=0;
int* mergeSort(int arr1[],int arr2[],int n1,int n2)//works for 2 sorted array
{
    int k=0,i=0,j=0;
    int *arr3=new int[n1+n2];
    while(i<n1 && j<n2)
    {
        if(arr1[i]<arr2[j])
        {
            arr3[k]=arr1[i];
            i++;k++;
        }
        else if(arr1[i]>arr2[j])
        {
            arr3[k]=arr2[j];
            j++;k++;
        }
        else
        {
            arr3[k]=arr2[j];
            i++,j++;k++;
            c++;
        }
    }
    if(i==n1 && j!=n2)
    {
        for(;j<n2;j++)
        {
            arr3[k]=arr2[j];
            k++;
        }        
    }
    else if(j==n2 && i!=n1)
    {
        for(;i<n1;i++)
        {
            arr3[k]=arr1[i];
            k++;
        }        
    }
    return arr3;
}
int main()
{
    // int arr[]{23,11,10,56,22,9,19,20};
    // int arr2[]{23,11,10,56,22,9,19,20,INT32_MAX};
    // int n=sizeof(arr)/sizeof(int);
    // int n2=sizeof(arr2)/sizeof(int);
    //bubbleSort(arr,n);
    //insertionSort(arr,n);
    //selectionSort(arr,n);
    //display(arr2,n2);
    //quickSort(arr2,0,n2);
    //display(arr2,n);
    int a[]={1,4,5,7,9,11,15};
    int b[]={1,3,4,6,14,16,19,23,45};
    int *ptrC=mergeSort(a,b,7,9);
    display(ptrC,16-c);
    return 0;
}
    


