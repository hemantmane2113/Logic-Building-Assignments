#include<iostream>
using namespace std;

template<class T>

void Display(T value,int iSize)
{
    for(int i = 1;i <= iSize;i++)
    {
        cout<< value << " ";
    }
    cout << "\n";
}

int main()
{
    Display('M',7);
    Display(11,3);
    Display(3.7,6);

    return 0;
    
}