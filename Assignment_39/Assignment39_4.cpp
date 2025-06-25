#include<iostream>
using namespace std;

template<class T>

int SearchLast(T *arr,int iSize,T iNo)
{

    for(int i = iSize-1;i >= 0;i--)//loop reversed,see next code for without loop reversal
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
    int iRet = SearchLast(arr,9,40);

    cout << "Last occurrence of 40 is at index: " << iRet << "\n";

    return 0;
}