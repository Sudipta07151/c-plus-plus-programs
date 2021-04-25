#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n,val,distance=0;
    cin>>n;
    vector<int> job_id;
    vector<int> crew_id;
    for(int i=0;i<n;i++)
    {
        cin>>val;
        crew_id.push_back(val);
    }
    for(int i=0;i<n;i++)
    {
        cin>>val;
        job_id.push_back(val);
    }
    sort(crew_id.begin(),crew_id.end());
    sort(job_id.begin(),job_id.end());
    for(int i=0;i<n;i++)
    {
        distance+=job_id.at(i)-crew_id.at(i);
    }
    cout<<"dist :"<<distance;
    return 0;
}
