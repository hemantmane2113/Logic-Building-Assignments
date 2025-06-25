#include<iostream>

using namespace std;


typedef int UINT;

UINT ToggleBitRange(UINT iNo,UINT iSRange,UINT iERange)
{   
    if (((iSRange< 1) || (iSRange > 32))||((iERange< 1) || (iERange > 32)))
    {
        cout<< "Invalid Range\n";
        return 0;
    }
    UINT iMask = 1;
    UINT iResult = iNo;
    UINT iCount = 0;

    for(iCount = iSRange;iCount<= iERange;iCount++)
    {
        iMask = 1 << (iCount - 1);
        iResult = iResult ^ iMask;
    }

    return iResult;
}

int main()
{
    UINT iValue = 0;
    UINT iNum1= 0;
    UINT iNum2= 0;
    UINT iRet = 0;

    cout<<"Enter the number: \n";
    cin>>iValue;

    cout<<"Enter the number from which you want to toggle: \n";
    cin>>iNum1;

    cout<<"Enter the number upto  which you want to toggle: \n";
    cin>>iNum2;

    iRet = ToggleBitRange(iValue,iNum1,iNum2);

    cout<<"The changed number is: "<<iRet<<"\n";

    return 0;
}