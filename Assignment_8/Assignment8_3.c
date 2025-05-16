// Write a program which accepts distance in kilometre and convert it into meters
// 1kilometer = 1000 meter

# include <stdio.h>

int KMtoMeter(int iNo)
{
    int imeter = 0;
    
    imeter = iNo * 1000;

    return imeter;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Distance: \n");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);
    printf("Kilometer to meter  is %d",iRet);

    return 0;
}

// The time complexity of this program is O(1) as it will take constant amount of time for any value.