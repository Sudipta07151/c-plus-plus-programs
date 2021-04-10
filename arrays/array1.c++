#include <iostream>
using namespace std;

int LinearSearch(int arr[], int key, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (key == arr[i])
        {
            return i;
        }
    }
    return -1;
}

int BinarySearch(int arr[], int key, int size)
{
    int low = 0, high = size, mid = 0;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (key == arr[mid])
            return 1;
        else
        {
            if (key > arr[mid])
            {
                low = mid + 1;
            }
            else
                high = mid - 1;
        }
    }
    return -1;
}

int RbinSearch(int arr[], int key, int low, int high)
{
    if (low <= high)
    {
        int mid = (low + high) / 2;
        if (key == arr[mid])
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            return RbinSearch(arr, key, mid + 1, high);
        }
        else
        {
            return RbinSearch(arr, key, low, mid - 1);
        }
    }
    return -1;
}

int main()
{
    // int A[5]={11,65,88};
    // //int A[5]={0};
    // for(int e:A)
    // {
    //     cout<<e<<endl;
    // }
    // cout<<A[2]<<endl;
    // cout<<2[A]<<endl;
    // cout<<*(A+2)<<endl;
    // int *p=new int[5];
    // for(int i=0;i<5;i++)
    // {
    //     cin>>p[i];
    // }
    // for(int i=0;i<5;i++)
    // {
    //     cout<<p[i]<<endl;
    // }
    // int *q=new int[10];
    // for(int i=0;i<5;i++)
    // {
    //     q[i]=p[i];
    // }
    // delete []p;
    // p=q;
    // q=NULL;
    // for(int i=0;i<10;i++)
    // {
    //     cout<<p[i]<<endl;
    // }

    //--------2D ARRAYS---------

    // int twoDArr[3][3] = {{1, 2, 3}, {90, 95, 99}, {12, 45, 88}};
    // for (auto &val : twoDArr)
    // {
    //     for (auto el : val)
    //     {
    //         cout << el <<" ";
    //     }
    //     cout<<endl;
    // }

    //-----------ARRAY OF POINTERS-------
    // int *A[3];
    // for(int i=0;i<3;i++)
    // {
    //     A[i]=new int[2];
    // }
    //cout<<A[2][2];

    //--------DOUBLE POINTER---------
    // int **A;
    // A=new int *[3];
    // for(int i=0;i<3;i++)
    // {
    //     A[i]=new int[2];
    // }

    //---------CHAR ARRAYS----------
    //char *ptr[]={"COOL","IS","GOOD"};
    //char ptr[][50]={"COOL","IS","GOOD"};
    // char *ptr="COOL IS GOOD";
    // for(int i=0;i<3;i++)
    // {
    //     cout<<ptr[i]<<" ";
    // }

    // ------LINEAR SEARCH------
    int arr[] = {11, 23, 24, 56, 78, 89, 99, 109, 11, 231};
    // if (LinearSearch(arr, 89, 6)!=-1)
    //     cout << "FOUND" << endl;
    // else
    //     cout << "NOT FOUND" << endl;

    // if (LinearSearch(arr, 90, 6)!=-1)
    //     cout << "FOUND" << endl;
    // else
    //     cout << "NOT FOUND" << endl;
    //cout << BinarySearch(arr, 89, 10) << endl;
    //cout << BinarySearch(arr, 101, 10) << endl;
    cout<<RbinSearch(arr,89,0,10)<<endl;
    cout<< RbinSearch(arr,119,0,10)<<endl;
    return 0;
}