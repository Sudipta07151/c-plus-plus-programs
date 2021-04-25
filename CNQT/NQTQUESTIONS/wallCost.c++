#include <iostream>
using namespace std;

int main()
{
    unsigned int IW, EW;
    float total=0.0f,SAI=0.0, temp,SAE=0.0;
    cout << "ENTER NUMBER OF INTERIOR WALLS: ";
    cin >> IW;
    cout << "ENTER NUMBER OF EXTERIOR WALLS: ";
    cin >> EW;
    if (IW != 0)
    {
        // float *SAI = new float[IW];
        for (int i = 0; i < IW; i++)
        {
            cout << "SURFACE AREA OF EACH INTERIOR WALLS: ";
            cin >> temp;
            SAI+=temp;

        }
    }
    if (EW != 0)
    {
        // float *SAE = new float[EW];
        for (int i = 0; i < EW; i++)
        {
            cout << "SURFACE AREA OF EACH EXTERIOR WALLS: ";
            cin >> temp;;
            SAE+=temp;
        }
    }
    if(IW!=0){
        total+=SAI*18;
    }
    if(EW!=0){
        total+=SAE*12;
    }
    cout<<"TOTAL: "<<total;
    return 0;
}