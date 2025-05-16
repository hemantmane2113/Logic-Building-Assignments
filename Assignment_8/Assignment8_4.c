// Write a program which accept temperature in Fahrenheit and convert it into celcius
// 1 celcius = (Fahrenheit-32)* ( 5/9)

# include <stdio.h>

double FhToCs(float fTemp)
{
    float iCs = 0;
    
    iCs = ((fTemp - 32) * (5.0/9.0));

    return iCs;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit: \n");
    scanf("%f",&fValue);

    dRet = FhToCs(fValue);
    printf("The Fahrenheit to degree celcius temperature  is %.4f",dRet);
     
    return 0;
}

// The time complexity of this program is O(0) as it will take constant amount of time for any value to run the program.