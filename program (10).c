////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    MultipleDisplay
//  Description :       Accept number from user and print first 5 multiples of that number.
//  Input :             Int
//  Output :            Int
//  Author :            Aman Shaikh    
//  Date:               28/10/2024
// 
////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iNum = 0;

    for(iNum = 1; iNum <= 5; iNum++) 
    {
        printf("%d\t",iNum*iNo);
    } 
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue); 

    MultipleDisplay(iValue);
    return 0;
}