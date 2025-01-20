///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    OddDisplay
//  Description :       Accept 'N' number from user and print all odd numbers on screen. 
//  Input :             int 
//  Output :            int
//  Author :            Aman Shaikh    
//  Date:               16/11/2024
// 
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void OddDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
    {
        printf("%d\t",iCnt);
    }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}