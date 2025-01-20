////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    SquareMeter
//  Description :       Accept number in Square Feet and converts it to Square meter. 
//  Input :             float
//  Output :            double
//  Author :            Aman Shaikh    
//  Date:               28/10/2024
// 
////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

double SquareMeter(int iValue)
{
    double dMeter = 0.0f; 

    dMeter = 0.0929 * iValue; 

    return dMeter;
}


int main()
{
    int iValue1 = 0;
    double dRet = 0.0f;

    printf("Enter Area in Square Feet : ");
    scanf("%d",&iValue1); 

    dRet = SquareMeter(iValue1);

    printf("SquareMeter is : %lf",dRet);

    return 0;
} 