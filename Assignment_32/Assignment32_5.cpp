#include<iostream>

using namespace std;


typedef int UINT;

UINT ToggleBit(UINT iNo)
{   
    UINT iMask1 = 0x0000000F;//15,last nibble
    UINT iMask2 =  0xF0000000;//4026531840,first nibble
    UINT iResult = 0;

    iResult = iNo ^ iMask1;
    iResult = iResult ^ iMask2;

    return iResult;
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    cout<<"Enter the number: \n";
    cin>>iValue;

    iRet = ToggleBit(iValue);

    cout<<"The changed number is: "<<iRet<<"\n";

    return 0;
}
