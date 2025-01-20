////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    Table
//  Description :       Accept number from user and print table of that number.
//  Input :             Int
//  Output :            Int
//  Author :            Aman Shaikh    
//  Date:               28/10/2024
// 
////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Table(int iNo)
{
    int iNum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iNum = 1; iNum <= 10; iNum++)
    {
        printf("%d\t",iNum*iNo);
    }
}


int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue); 

    Table(iValue);

    return 0;
}