////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    DollarToINR
//  Description :       Accept number from user and convert that number into INR from Dollar.
//  Input :             Int
//  Output :            Int
//  Author :            Aman Shaikh    
//  Date:               28/10/2024
// 
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int DollarToINR(int iNo)
{
    int iNum = 0;

    iNum = 70 * iNo;

    return iNum;
}


int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue); 

    iRet = DollarToINR(iValue);
    printf("Value of INR is : %d",iRet);

    return 0;
}