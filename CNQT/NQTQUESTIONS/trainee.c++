#include <iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
    int trainee[3][3];
    vector<int> store;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>trainee[i][j];
        }
    }
    for(int i=0;i<3;i++)
    {
        int j=0,result=0;
        while(j<3)
        {
            result+=trainee[j][i];
            j++;
        }
        result=(int)(ceil(result/3));
        store.push_back(result);
    }
    int max;
    max=store.at(0);
    for(int i=1;i<3;i++)
    {
        if(max<store.at(i))
        {
            max=store.at(i);
        }
    }
    for(int i=0;i<3;i++)
    {
        if(store.at(i)==max)
        {
            cout<<"TRAINEE: "<<(i+1)<<endl;
        }
    }
    return 0;
}
