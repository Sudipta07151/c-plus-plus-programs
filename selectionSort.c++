#include<iostream>
using namespace std;

void swap(int &num1, int &num2)
{
    int temp;
    temp=num1;
    num1=num2;
    num2=temp;
}
int *selectionSort(int arr[], int n)
{
    int j, k;
    for (int i = 0; i < n; i++)
    {
        for (j = k = i; j < n; j++)
        {
            if (arr[j] < arr[k])
            {
                k=j;
            }
        }
        swap(arr[i],arr[k]);
    }
    return arr;
}
int main()
{
    int arr[] = {4, 24, 12, 32, 99, 34, 64, 88, 121, 33, 132, 76, 343};
    int *store=selectionSort(arr, 13);
    for(int i=0;i<13;i++){
        cout<<store[i]<<" ";
    }
    return 0;
}