////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    TableRev
//  Description :       Accept number from user and print reverse table of that number.
//  Input :             Int
//  Output :            Int
//  Author :            Aman Shaikh    
//  Date:               28/10/2024
// 
////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void TableRev(int iNo)
{
    int iNum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iNum = 10; iNum >= 1; iNum--)
    {
        printf("%d\t",iNum*iNo);
    }
}


int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue); 

    TableRev(iValue);

    return 0;
}