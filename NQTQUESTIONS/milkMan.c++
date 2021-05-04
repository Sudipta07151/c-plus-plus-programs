#include <iostream>
using namespace std;

int main()
{
    int bottle_capacity[]={1,5,7,10};
    int test_cases;
    cin>>test_cases;
    int input [test_cases];
    for(int i=0;i<test_cases;i++)
    cin>>input[i];
    int c=0;
    while(test_cases>0)
    {
        int s=0,i;
        int val=input[c];
        for(i=3;i>=0;i--)
        {
            if(val/bottle_capacity[i])
            {
                if(bottle_capacity[i]>=10)
                {
                    s=s+(val/bottle_capacity[i]);
                }
                else
                {
                    s++;    
                }
                val=val%bottle_capacity[i];
            }
            else
            {
                break;
            }
        }
        if(val)
        {
            s++;
        }
        cout<<s<<endl;
        test_cases--;
        c++;
    }
    return 0;
}
