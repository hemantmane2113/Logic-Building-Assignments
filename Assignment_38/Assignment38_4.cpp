#include<iostream>
using namespace std;

template<class T>

T Max(T *arr,int iSize)
{
    int i = 0;
    T Max = arr[1];
    
    if((arr == NULL)||(iSize <= 0))
    {
        return 0;
    }

    for(i = 0;i < iSize;i++)
    {
        if(Max < arr[i])
        {
            Max = arr[i];
        }
    }
    return Max;
}

int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {10.0,3.7,9.8,8.7};
    int iMax = Max(arr,5);

    cout<<iMax<<"\n";

    float fMax = Max(brr,4);
    cout<<fMax<<"\n";

    return 0;

}