///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    Display
//  Description :       Accept 'N' number from user and print below pattern. 
//  Input :             int 
//  Output :            int
//  Author :            Aman Shaikh    
//  Date:               16/11/2024
// 
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        printf("*\t");
    }
    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        printf("#\t");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}