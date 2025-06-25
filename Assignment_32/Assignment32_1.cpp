#include<iostream>

using namespace std;


typedef unsigned int UINT;

bool CheckBit(UINT iNo,UINT iPos)
{     
    if ((iPos < 1) || (iPos > 32))
    {
        cout<< "Invalid Bit position\n";
        return false;
    }

    UINT iMask = 1;
    UINT iResult = 0;

    iMask = iMask <<(iPos - 1);

    iResult = iNo & iMask;

    return (iResult == iMask);

}

int main()
{
    UINT iValue = 0;
    UINT iLocation = 0;
    bool bRet = false;

    cout<<"Enter the number: \n";
    cin>>iValue;

    cout<<"Enter the location: \n";
    cin>>iLocation;

    bRet = CheckBit(iValue,iLocation);

    if(bRet == true)
    {
      cout<<"The bit at postion " <<iLocation <<" for number " << iValue <<" is: ON\n";  
    }
    else
    {
        cout<<"The bit at postion " <<iLocation <<" for number " << iValue <<" is: OFF\n";
    }

    return 0;
}
