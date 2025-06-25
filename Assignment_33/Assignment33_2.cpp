#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT CheckBit(UINT iNo1,UINT iNo2)
{   
    UINT iNoo1 = iNo1;
    UINT iNoo2 = iNo2;
    UINT iNo3 = iNo1 & iNo2;
    UINT iMask = 1;
    UINT iLength1 = 0;
    UINT iLength2 = 0;
    UINT iResult = 0;
    UINT iCount = 0;
    UINT iCounter = 0;


    while(iNoo1 > 0)
    {
        iNoo1 = iNoo1 >> 1;
        iLength1++;
    }

    while(iNoo2 > 0)
    {
        iNoo2 = iNoo2 >> 1;
        iLength2++;
    }

    if(iLength1 < iLength2)
    {
        for(iCounter = 1;iCounter <= iLength1;iCounter++)
        {
            iMask = 1 << iCounter;;
            if((iNo3 & iMask) == iMask)
            {
                iCount++;
            }         
        }    
    }
    else
    {
        for(iCounter = 1;iCounter <= iLength2;iCounter++)
        {
            iMask = 1 << (iCounter-1);;
            if((iNo3 & iMask) == iMask)
            {
                iCount++;
            }         
        }   
    }
    return iCount;
    
}

int main()
{
    UINT iValue1 = 0;
    UINT iValue2 = 0;
 ;
    UINT iRet = 0;

    cout<<"Enter first number : ";
    cin>>iValue1;

    cout<<"Enter the second number : ";
    cin>>iValue2;


    iRet = CheckBit(iValue1,iValue2);

    cout<<"Number of common ON bits: " << iRet << "\n";;

    return 0;

}