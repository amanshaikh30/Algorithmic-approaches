////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    DollarToINR
//  Description :       Accept 'N' number from user as Dollar and return its corresponding currency in Indian Rupees. 
//  Input :             int 
//  Output :            int
//  Author :            Aman Shaikh    
//  Date:               16/11/2024
// 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int DollarToINR(int iNo)
{
    return (iNo * 70); 
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the money in Dollars : ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Money in Indian Currency is : %d",iRet);

    return 0;
}