#include<iostream>
using namespace std;

template<class T>

void Reverse(T *arr,int iSize)
{

    for(int i = iSize-1;i >= 0;i--)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};
    for(int i = 0;i < 9;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

    Reverse(arr,9);
    return 0;
}