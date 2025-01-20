////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    Number
//  Description :       Accept number from user and print the follwing.
//  Input :             Int
//  Output :            Int
//  Author :            Aman Shaikh    
//  Date:               28/10/2024
// 
////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Number(int iNo)
{
    if(iNo <= 50)
    {
        printf("small");
    }
    else if(iNo > 50 && iNo <= 100)
    {
        printf("medium");
    }
    else if(iNo > 100)
    {
        printf("large");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue); 

    Number(iValue);
}