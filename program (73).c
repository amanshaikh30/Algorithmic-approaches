////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    EvenFactorial
//  Description :       Accept 'N' number from user and print Even factorial of the given number. 
//  Input :             int 
//  Output :            int
//  Author :            Aman Shaikh    
//  Date:               16/11/2024
// 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void EvenFactorial(int iNo)
{
    int iCnt = 0, iSum = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt >= 1; iCnt--) 
    {
        if((iCnt % 2) == 0) 
        {
            iSum = iSum * iCnt; 
        }
    }
    printf("Even Factorial is : %d",iSum);
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    EvenFactorial(iValue);

    return 0;
}