#include<iostream>

using namespace std;


typedef unsigned int UINT;

UINT CountOne(UINT iNo)
{     

    UINT iNoo = iNo;
    UINT iMask = 1;
    UINT iLength = 0;
    UINT iPos = 1;
    UINT iCount = 0;
    UINT OneCounter = 0;
    

    while(iNoo > 0)
    {
        iLength++;
        iNoo = iNoo >> 1;
    }
    cout<<"Total number of bits in a number "<<iNo<< " is "<<iLength<<"\n";

    for(iCount = 1;iCount <= iLength;iCount++)
    {
        iMask = 1 << (iCount - 1);//1 is a binary operator for eg 00000001..shift it to left by (iCount -1)positions

        if((iNo & iMask) == iMask)
        {
            OneCounter++;
        }  
    }
    return OneCounter;

}

int main()
{
    UINT iValue = 0;
    
    UINT iRet = 0;

    cout<<"Enter the number: \n";
    cin>>iValue;

    iRet = CountOne(iValue);

    cout<<"The total number of ON(1) bits in "<<iValue << " are " <<iRet<<"\n";



    return 0;
}
