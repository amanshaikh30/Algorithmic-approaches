////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    FhtoCs
//  Description :       Accept Farenheit temperature from user convert it to the Celsius. 
//  Input :             float
//  Output :            double
//  Author :            Aman Shaikh    
//  Date:               28/10/2024
// 
////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

double FhtoCs(float fTemp)
{
    double dCelsius = 0.0f; 

    dCelsius = (fTemp-32)*(5.0/9.0); 

    return dCelsius;
}


int main()
{
    float fValue1 = 0.0f;
    double dRet = 0.0f;

    printf("Enter temperature in Farenheit : ");
    scanf("%f",&fValue1); 

    dRet = FhtoCs(fValue1);

    printf("Temperature in Celsius is : %lf",dRet);

    return 0;
}