////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    OddDisplay
//  Description :       Accept number from user and print all odd numbers till that number.
//  Input :             Int
//  Output :            Int
//  Author :            Aman Shaikh    
//  Date:               28/10/2024
// 
////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void OddDisplay(int iNo)
{
    int iNum = 0;

    for(iNum = 1; iNum < iNo; iNum++) 
    {
        if((iNum % 2) != 0)
        {
            printf("%d\t",iNum);
        }
    } 
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue); 

    OddDisplay(iValue);
}