#include<iostream>
using namespace std;

template<class T>

int SearchFirst(T *arr,int iSize,T iNo)
{

    for(int i = 0;i < iSize;i++)
    {
        if(arr[i]== iNo)
        {
            return i;
        }
    }
    return -1; //have to return or will throw error 
}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};
    int iRet = SearchFirst(arr,9,40);

    cout << "First occurrence of 40 is at index: " << iRet << "\n";

    return 0;
}