////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    FactorialDiff
//  Description :       Accept number from user and print the difference between 
//                      even factorial and odd factorial of that number. 
//  Input :             Int
//  Output :            Int
//  Author :            Aman Shaikh    
//  Date:               28/10/2024
// 
////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iAns = 1, iNum = 1;  
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iAns = 1; iNo > 0; iNo--)
    {
        if((iNo % 2) == 0)
        {
            iAns *= iNo;
        } 
        else if((iNo % 2) != 0)
        {
            iNum *= iNo;
        } 
    }
    
    return iAns-iNum;
}


int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue); 

    iRet = FactorialDiff(iValue);

    printf("Factorial Difference is : %d",iRet);

    return 0;
}