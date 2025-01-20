////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    CircleArea
//  Description :       Accept number from user and Calculate the area of the Circle. 
//  Input :             float
//  Output :            double
//  Author :            Aman Shaikh    
//  Date:               28/10/2024
// 
////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

double CircleArea(float fRadius)
{
    double dArea = 0.0; 

    dArea = 3.14 * fRadius * fRadius;

    return dArea;
}


int main()
{
    float fValue = 0.0f;
    double dRet = 0.0f;

    printf("Enter number : ");
    scanf("%f",&fValue); 

    dRet = CircleArea(fValue);

    printf("Area of the Circle is : %lf",dRet);

    return 0;
}