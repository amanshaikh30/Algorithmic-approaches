///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    Display
//  Description :       Accept 'N' number from user and print its number line on screen. 
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

    if(iNo > 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt <= -iNo; iCnt++)
    {
        printf("%d\t",iCnt);
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