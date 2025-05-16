// Write a program which accept width and height of rectangle from user and calculate its 
// area
//Area = width * height

# include <stdio.h>

double RectArea(float fWidth,float fHeight)
{
    
    float fArea = 0.0;

    fArea = fWidth * fHeight;

    return fArea;
}

int main()
{
    float fValue1 = 0.0;
    float fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter Width: \n");
    scanf("%f",&fValue1);

    printf("Enter Height: \n");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);
    printf("Area of Rectangle is %.4f",dRet);
    
    return 0;
}

// The time complexity of this program is 0(1) as will take constant amount of time for all values.