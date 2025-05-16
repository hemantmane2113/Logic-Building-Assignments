// Write a program which accept area in square feet and convert it into square meter
// 1 square feet = 0.0929 square meter

# include <stdio.h>

double SquareMeter(int iValue)
{
    double dArea = 0.0;// double is more precise than float

    dArea = iValue * 0.0929;

    return dArea;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet: \n");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);
    printf("Area in square meter is %.6f",dRet);

    return 0;
}


// The time complexity of this program is O(0) as it will take constant amount of time for any value to run the program.