void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int *bubbleSort(int arr[],int n){
    int flag;
    for(int i=0;i<n-1;i++) //number of passes (n-1)
    {
        cout<<"pass"<<i+1<<endl;
        int flag=0;
        for(int j=0;j<(n-i-1);j++) //number of comparisons (n-1) for decrease 1 after each pass so (n-i-1)
        {
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag=1;
            }
        }
        if(flag){
            continue;
        }
        else{
            return arr;
        }
    }
    return arr;
}

void display(){
    int arr[]={1,5,3,88,11,45};
    int *store;
    store=bubbleSort(arr,6);
    for(int i=0;i<6;i++){
        cout<<store[i]<<" ";
    }
}
