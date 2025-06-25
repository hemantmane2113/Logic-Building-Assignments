#include<iostream>
using namespace std;

template<class T>

int SearchLast(T *arr,int iSize,T iNo)
{
    int LastIndex = -1;//initialize to -1(not found)
    for(int i =1;i < iSize;i++)
    {
        if(arr[i]== iNo)
        {
            LastIndex =  i;
        }
    }
    return LastIndex; //have to return or will throw error 
}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};
    int iRet = SearchLast(arr,9,40);

    cout << "Last occurrence of 40 is at index: " << iRet << "\n";

    return 0;
}