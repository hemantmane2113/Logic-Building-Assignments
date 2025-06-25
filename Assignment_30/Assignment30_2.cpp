#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo,UINT iPos1,UINT iPos2)
{
    UINT iMask1 = 1;
    UINT iMask2 = 1;
    UINT iResult1 = 0;
    UINT iResult2 = 0;

    if(((iPos1 <= 0) || (iPos1 > 32))||((iPos2 <= 0) || (iPos2 > 32)))
    {
        cout<<"Invalid Bit positions\n";
        return false;
    }

    iMask1 = iMask1 << (iPos1 - 1);
    iMask2 = iMask2 << (iPos2 - 1);


    iResult1 = iNo & iMask1;
    iResult2 = iNo & iMask2;

    return((iResult1 == iMask1)&&(iResult2 == iMask2));

}

int main()
{
    UINT iValue = 0;
    UINT iLocation1 = 0;
    UINT iLocation2 = 0;
    bool bRet = false;

    cout<<"Enter number : ";
    cin>>iValue;

    cout<<"Enter the first position : ";
    cin>>iLocation1;

    cout<<"Enter the second position : ";
    cin>>iLocation2;

    bRet = CheckBit(iValue,iLocation1,iLocation2);

    if(bRet == true)
    {
        cout<<"Bit is ON at position "<<iLocation1<< " and position "<<iLocation2<<"\n";
    }
    else
    {
        cout<<"At least one bit is OFF among positions "<<iLocation1<< " and "<<iLocation2<<"\n";
    }

    return 0;

}