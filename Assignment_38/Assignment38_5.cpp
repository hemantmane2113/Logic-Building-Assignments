#include<iostream>
using namespace std;

template<class T>

T Min(T *arr,int iSize)
{
    
    int i = 0;
    T Min= arr[1];
    
    if((arr == NULL)||(iSize <= 0))
    {
        return 0;
    }

    for(i = 0;i < iSize;i++)
    {
        if(Min > arr[i])
        {
            Min = arr[i];
        }
    }
    return Min;
}

int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {10.0,3.7,9.8,8.7};
    int iMin = Min(arr,5);

    cout<<iMin<<"\n";

    float fMin = Min(brr,4);
    cout<<fMin<<"\n";

    return 0;

}