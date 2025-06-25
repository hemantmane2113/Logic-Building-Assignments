#include<iostream>
using namespace std;

template<class T>

T Max(T no1,T no2,T no3)
{
    T Max;

    if((no1 >= no2)&&(no1 >= no3))
    {
        Max = no1;
    }
    else if((no1 <= no2 )&&(no2 >= no3))
    {
        Max = no2;
    }
    else
    {
        Max = no3;
    }
    return Max;
    
    
    
}
int main()
{
    int iRet = Max(50,45,55);
    cout<<iRet<<"\n";

    float fRet = Max(10.0f,20.0f,35.0f);
    cout<<fRet<<"\n";


    return 0;
}