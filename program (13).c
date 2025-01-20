////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    Factorial
//  Description :       Accept number from user and print factorial of that number.
//  Input :             Int
//  Output :            Int
//  Author :            Aman Shaikh    
//  Date:               28/10/2024
// 
////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Factorial(int iNo)
{
    int iAns = 1;  

    while(iNo > 0) 
    {
        iAns *= iNo; 
        iNo--;       
    }
    return iAns;
}


int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue); 

    iRet = Factorial(iValue);

    printf("Factorial of number is : %d",iRet);

    return 0;
}