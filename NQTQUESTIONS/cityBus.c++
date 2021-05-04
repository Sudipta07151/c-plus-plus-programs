#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int getFare(string source, string destination)
{
    int Path[] = {800, 600, 750, 900, 1400, 1200, 1100, 1500};
    string BusStops[] = {"TH", "GA", "IC", "HA", "TE", "LU", "NI", "CA"};
    int s = 0, d = 0, distance = 0;
    for (int i = 0; i < 8; i++)
    {
        if (BusStops[i] == source)
        {
            s = i;
        }
        if (BusStops[i] == destination)
        {
            d = i;
        }
    }
    cout<<"s:"<<s<<endl;
    cout<<"d:"<<d<<endl;
    if(s==d)
    {
        return 0;
    }
    else if (s > d)
    {
        for (int i = s+i; i < 8; i++)
        {
            distance += Path[i];
        }
        for (int i = 0; i <d; i++)
        {
            distance += Path[i];
        }
    }
    else
    {
        for (int i = s; i < d; i++)
        {
            distance += Path[i+1];
        }
    }
    cout<<distance;
    float fare = (distance * 0.005);
    fare = (ceil(fare));
    return fare;
}

int main()
{
    cout<<getFare("NI","HA");
}