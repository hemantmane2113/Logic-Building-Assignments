#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
    UINT iMask1 = 1;
    UINT iMask2 = 1;
    UINT iResult1 = 0;
    UINT iResult2 = 0;



    iMask1 = 1 << 0;
    iMask2 = 1 << 31;


    iResult1 = iNo & iMask1;
    iResult2 = iNo & iMask2;

    return((iResult1 == iMask1)&&(iResult2 == iMask2));

}

int main()
{
    UINT iValue = 0;

    bool bRet = false;

    cout<<"Enter number : ";
    cin>>iValue;



    bRet = CheckBit(iValue);

    if(bRet == true)
    {
        cout<<"Bit is ON at position 1 and position 32 "<<"\n";
    }
    else
    {
        cout<<"At least one bit is OFF among positions 1  and position 32 "<<"\n";
    }

    return 0;

}
