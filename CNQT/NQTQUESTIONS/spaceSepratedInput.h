#include<string>
void readValues()
{
    int arr[9];
    for(int &val :arr){
        cin>>val;
    }
    for(auto val:arr){
        cout<<val<<endl;
    }
    string str="Sudipta";
    cout<<str.size();
}

