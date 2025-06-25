#include<iostream>

using namespace std;


typedef int UINT;

UINT ChangeBit(UINT iNo,UINT iPos1,UINT iPos2)
{

    if (((iPos1 < 1) || (iPos1 > 32))||((iPos2 < 1) || (iPos2 > 32)))
    {
        cout<< "Invalid Bit position\n";
        return -1;
    }
    
    UINT iMask1 = 1;
    UINT iMask2 = 1;
    UINT iResult = 0;

    iMask1 = iMask1 << (iPos1 - 1);
    iMask2 = iMask2 << (iPos2 - 1);

    iMask1 = ~iMask1;
    iMask2 = ~iMask2;

    iResult = iNo & iMask1;
    iResult = iResult & iMask2;

    return iResult;
}

int main()
{
    UINT iValue = 0;
    UINT iLocation1 = 0;
    UINT iLocation2 = 0;
    UINT iRet = 0;

    cout<<"Enter the number: \n";
    cin>>iValue;

    cout<<"Enter the location1: \n";
    cin>>iLocation1;

    cout<<"Enter the location2: \n";
    cin>>iLocation2;

    iRet = ChangeBit(iValue,iLocation1,iLocation2);

    cout<<"The changed number is: "<<iRet<<"\n";

    return 0;
}