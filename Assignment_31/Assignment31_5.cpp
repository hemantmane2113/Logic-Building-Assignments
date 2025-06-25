#include<iostream>

using namespace std;


typedef int UINT;

UINT ChangeBit(UINT iNo)
{   
    
    UINT iMask = 15;//0x0F// dont use 0000 1111
    UINT iResult = 0;

    iResult = iNo | iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    cout<<"Enter the number: \n";
    cin>>iValue;



    iRet = ChangeBit(iValue);

    cout<<"The changed number is: "<<iRet<<"\n";

    return 0;
}