////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    Display
//  Description :       Accept number from user and print its numbers line.
//  Input :             Int
//  Output :            Int
//  Author :            Aman Shaikh    
//  Date:               28/10/2024
// 
////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int iNum = 0;

    if(iNo > 0)
    {
        iNo = -iNo;
    }

    for(iNum = iNo; iNum <= -(iNo); iNum++)
    {
        printf("%d\t",iNum);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}