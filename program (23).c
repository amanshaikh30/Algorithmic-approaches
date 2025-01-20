////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    KMtoMeter
//  Description :       Accept number from user convert it to the Meters. 
//  Input :             Int
//  Output :            Int
//  Author :            Aman Shaikh    
//  Date:               28/10/2024
// 
////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iMeter = 0; 

    iMeter = 1000 * iNo;

    return iMeter;
}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Kilometer to Meter is : %d",iRet);

    return 0;
} 