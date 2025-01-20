///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    Pattern
//  Description :       Accept 'N' number from user and print that number of $ and * on screen. 
//  Input :             int 
//  Output :            int
//  Author :            Aman Shaikh    
//  Date:               16/11/2024
// 
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    if( iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$\t");
        printf("*\t"); 
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}