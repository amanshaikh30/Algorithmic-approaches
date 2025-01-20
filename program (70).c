///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    MultipleDisplay
//  Description :       Accept 'N' number from user and print all first 5 multiples of that number. 
//  Input :             int 
//  Output :            int
//  Author :            Aman Shaikh    
//  Date:               16/11/2024
// 
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("%d\t",iCnt*iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}