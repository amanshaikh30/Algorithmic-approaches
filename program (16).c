////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    Display
//  Description :       Accept number from user and print no. of '*' & '#' of that number.
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

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iNum = 1; iNum <= iNo; iNum++)
    {
        printf("*\t");
    }
    for(iNum = 1; iNum <= iNo; iNum++)
    {
        printf("#\t"); 
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