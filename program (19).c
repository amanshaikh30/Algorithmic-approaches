////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    OddFactorial
//  Description :       Accept number from user and print odd factorial of that number.
//  Input :             Int
//  Output :            Int
//  Author :            Aman Shaikh    
//  Date:               28/10/2024
// 
////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int OddFactorial(int iNo)
{
    int iAns = 1;  
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iAns = 1; iNo > 0; iNo--)
    {
        if((iNo % 2) != 0)
        {
            iAns *= iNo;
        } 
    }
    
    return iAns;
}


int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue); 

    iRet = OddFactorial(iValue);

    printf("Factorial of number is : %d",iRet);

    return 0;
}