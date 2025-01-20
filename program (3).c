////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    NonFact
//  Description :       Accept number from user and display all its non factors.
//  Input :             Int
//  Output :            Int
//  Author :            Aman Shaikh    
//  Date:               28/10/2024
// 
////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void NonFact(int iNo)
{
    int iNum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iNum = 1; iNum < iNo; iNum++) 
    {
        if((iNo % iNum) != 0)
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

    NonFact(iValue);

    return 0;
}