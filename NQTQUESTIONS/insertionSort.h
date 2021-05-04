int *insertionSort(int arr[],int n){
    int j;
    int val;
    for(int i=1;i<n;i++){
        val=arr[i];
        j=i-1;
        cout<<"pass "<<i<<endl;
        while(j>-1 && val<arr[j])
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=val;
    }
    return arr;
}

void display(){
    int arr[]={1,5,3,88,11,45};
    int *store;
    store=insertionSort(arr,6);
    for(int i=0;i<6;i++){
        cout<<store[i]<<" ";
    }
}
