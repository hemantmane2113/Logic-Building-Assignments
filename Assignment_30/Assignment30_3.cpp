#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo,UINT iPos1,UINT iPos2,UINT iPos3,UINT iPos4)
{
    UINT iMask1 = 1;
    UINT iMask2 = 1;
    UINT iMask3 = 1;
    UINT iMask4 = 1;
    UINT iResult1 = 0;
    UINT iResult2 = 0;
    UINT iResult3 = 0;
    UINT iResult4 = 0;

    if(((iPos1 <= 0) || (iPos1 > 32))||((iPos2 <= 0) || (iPos2 > 32)) || ((iPos3 <= 0) || (iPos3 > 32))||((iPos4 <= 0) || (iPos4 > 32)))
    {
        cout<<"Invalid Bit positions\n";
        return false;
    }

    iMask1 = iMask1 << (iPos1 - 1);
    iMask2 = iMask2 << (iPos2 - 1);
    iMask3 = iMask3 << (iPos3 - 1);
    iMask4 = iMask4 << (iPos4 - 1);


    iResult1 = iNo & iMask1;
    iResult2 = iNo & iMask2;
    iResult3 = iNo & iMask3;
    iResult4 = iNo & iMask4;

    return((iResult1 == iMask1)&&(iResult2 == iMask2)&&(iResult3 == iMask3)&&(iResult4 == iMask4));

}

int main()
{
    UINT iValue = 0;
    UINT iLocation1 = 0;
    UINT iLocation2 = 0;
    UINT iLocation3 = 0;
    UINT iLocation4 = 0;
    bool bRet = false;

    cout<<"Enter number : ";
    cin>>iValue;

    cout<<"Enter the first position : ";
    cin>>iLocation1;

    cout<<"Enter the second position : ";
    cin>>iLocation2;

    cout<<"Enter the third position : ";
    cin>>iLocation3;

        cout<<"Enter the fourth position : ";
    cin>>iLocation4;

    bRet = CheckBit(iValue,iLocation1,iLocation2,iLocation3,iLocation4);

    if(bRet == true)
    {
        cout<<"Bit is ON at position "<<iLocation1 <<"," <<iLocation2 <<"," <<iLocation3 <<" and position "<<iLocation4<<"\n";
    }
    else
    {
        cout<<"At least one bit is OFF among positions "<<iLocation1 <<"," <<iLocation2 <<"," <<iLocation3 <<" and position "<<iLocation4<<"\n";
    }

    return 0;

}