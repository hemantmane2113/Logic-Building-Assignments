#include<iostream>

using namespace std;


typedef int UINT;

UINT ToggleBit(UINT iNo,UINT iPos)
{   
    if ((iPos < 1) || (iPos > 32))
    {
        cout<< "Invalid Bit position\n";
        return -1;
    }
    
    UINT iMask = 1;
    UINT iResult = 0;

    iMask = iMask << (iPos - 1);

    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0;
    UINT iLocation = 0;
    UINT iRet = 0;

    cout<<"Enter the number: \n";
    cin>>iValue;

    cout<<"Enter the location: \n";
    cin>>iLocation;

    iRet = ToggleBit(iValue,iLocation);

    cout<<"The changed number is: "<<iRet<<"\n";

    return 0;
}