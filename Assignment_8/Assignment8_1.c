// Write a program which accept radius of circle from user and calculate its area.
// Consider value of Pi as 3.14
//Area = Pi * Radius * Radius

# include <stdio.h>

double CircleArea(float fRadius)
{
    float fPi = 3.14;
    float fArea = 0.0;

    fArea = fPi * fRadius * fRadius;

    return fArea;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Radius: \n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);
    printf("Area of circle is %.4f",dRet);

    return 0;
}

// The time complexity of this program is 0(1) as it will take same amount of time for any value.